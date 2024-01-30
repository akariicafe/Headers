@class NSDictionary, NSString, NSNumber;

@interface PIPortraitAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) long long version;
@property (nonatomic) double strength;
@property (readonly, nonatomic) double defaultStrength;
@property (copy, nonatomic) NSNumber *spillMatteAllowed;

+ (id)strengthKey;
+ (id)kindKey;
+ (id)portraitInfoKey;
+ (id)spillMatteAllowedKey;

- (BOOL)canRenderPortraitEffect;
- (id)initWithAdjustment:(id)a0;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;
- (id)pasteKeysForMediaType:(long long)a0;

@end
