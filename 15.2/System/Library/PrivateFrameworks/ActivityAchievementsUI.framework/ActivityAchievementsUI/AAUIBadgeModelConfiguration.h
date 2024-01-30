@class NSString, UIColor, NSArray;

@interface AAUIBadgeModelConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long badgeShape;
@property (copy, nonatomic) NSString *badgeModelPath;
@property (copy, nonatomic) NSString *badgeTexturePath;
@property (copy, nonatomic) NSString *shapeName;
@property (copy, nonatomic) UIColor *metalColor;
@property (nonatomic) BOOL useFullColorEnamel;
@property (copy, nonatomic) UIColor *modelEnamelColor;
@property (nonatomic) BOOL unearnedUsesTwoToneEnamel;
@property (nonatomic) BOOL faceHasMetalInlay;
@property (copy, nonatomic) NSArray *enamelTriColors;

+ (id)configurationWithModelPath:(id)a0 texturePath:(id)a1 plistPath:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (id)initWithModelPath:(id)a0 texturePath:(id)a1 shapeName:(id)a2 metalColor:(id)a3 useFullColorEnamel:(BOOL)a4 modelEnamelColor:(id)a5 unearnedUsesTwoToneEnamel:(BOOL)a6 faceHasMetalInlay:(BOOL)a7 enamelTricolors:(id)a8;

@end
