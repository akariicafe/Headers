@class NSString, UIColor;

@interface UltravioletIndexModel : NSObject

@property (readonly, nonatomic) double fraction;
@property (readonly, nonatomic) NSString *localizedIndex;
@property (readonly, nonatomic) UIColor *tintColor;

+ (id)ultravioletIndexModelForConditions:(id)a0 indexNumberFormatter:(id)a1 useRoundedVariant:(BOOL)a2;

- (void).cxx_destruct;

@end
