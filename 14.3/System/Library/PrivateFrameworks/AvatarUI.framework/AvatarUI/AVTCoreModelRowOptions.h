@class NSString, NSArray, AVTCoreModelFramingModeOverrides, AVTAvatarPose, AVTCoreModelRowDisplayCondition;

@interface AVTCoreModelRowOptions : NSObject

@property (readonly, copy, nonatomic) NSString *framingMode;
@property (readonly, nonatomic) BOOL separator;
@property (readonly, copy, nonatomic) NSArray *presetOverrides;
@property (readonly, nonatomic) AVTCoreModelFramingModeOverrides *framingModeOverrides;
@property (readonly, copy, nonatomic) AVTAvatarPose *poseOverride;
@property (readonly, nonatomic) AVTCoreModelRowDisplayCondition *displayCondition;
@property (readonly, nonatomic) unsigned long long displayMode;
@property (readonly, nonatomic) unsigned long long sortingOption;

+ (unsigned long long)displayModeFromString:(id)a0;
+ (unsigned long long)sortingOptionFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithFramingMode:(id)a0 separatorFlag:(BOOL)a1 presetOverrides:(id)a2 poseOverride:(id)a3 framingModeOverrides:(id)a4 displayMode:(unsigned long long)a5 displayCondition:(id)a6 sortingOption:(unsigned long long)a7;

@end
