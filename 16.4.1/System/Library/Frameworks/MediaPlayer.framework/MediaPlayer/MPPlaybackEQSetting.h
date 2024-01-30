@class NSArray, NSString;

@interface MPPlaybackEQSetting : NSObject <NSCopying>

@property (class, readonly, nonatomic) NSArray *allSettings;

@property (readonly, nonatomic) long long preset;
@property (readonly, nonatomic) int avPreset;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)settingWithName:(id)a0;
+ (id)settingWithPreset:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithPreset:(long long)a0;

@end
