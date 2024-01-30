@class NSDictionary, NSString, NSNumber;

@interface PIPortraitAdjustmentController : PIAdjustmentController

@property (copy, nonatomic) NSDictionary *portraitInfo;
@property (copy, nonatomic) NSString *kind;
@property (nonatomic) long long version;
@property (nonatomic) double strength;
@property (copy, nonatomic) NSNumber *spillMatteAllowed;

+ (id)strengthKey;
+ (id)kindKey;
+ (id)spillMatteAllowedKey;
+ (id)portraitInfoKey;

- (BOOL)canRenderPortraitEffect;
- (id)initWithAdjustment:(id)a0;
- (BOOL)isSettingEqual:(id)a0 forKey:(id)a1;

@end
