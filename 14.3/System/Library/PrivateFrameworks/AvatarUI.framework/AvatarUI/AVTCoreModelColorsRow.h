@class AVTCoreModelRowOptions, NSArray, NSString, AVTCoreModelPairing;

@interface AVTCoreModelColorsRow : NSObject <AVTCoreModelRow>

@property (readonly, nonatomic) NSArray *primaryColors;
@property (readonly, nonatomic) NSArray *extendedColors;
@property (readonly, nonatomic) BOOL alwaysShowExtended;
@property (readonly, nonatomic) long long colorCategory;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) AVTCoreModelRowOptions *options;
@property (readonly, copy, nonatomic) AVTCoreModelPairing *pairing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 primaryColors:(id)a1 extendedColors:(id)a2 identifier:(id)a3 alwaysShowExtended:(BOOL)a4 colorCategory:(long long)a5 pairing:(id)a6 options:(id)a7;
- (id)initWithTitle:(id)a0 primaryColors:(id)a1 extendedColors:(id)a2 alwaysShowExtended:(BOOL)a3 colorCategory:(long long)a4 pairing:(id)a5 options:(id)a6;

@end
