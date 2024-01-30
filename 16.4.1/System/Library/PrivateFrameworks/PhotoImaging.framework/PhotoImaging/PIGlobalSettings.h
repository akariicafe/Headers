@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PIGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL falseColorHDR;
@property (nonatomic) BOOL forceGlassesMatteOff;
@property (nonatomic) BOOL forceSpillMatteOff;
@property (nonatomic) BOOL allowSpillMatteOnOlderPortraitV2Captures;
@property (nonatomic) BOOL segmentationDebugRoundTripProxyImage;
@property (nonatomic) BOOL disableSegmentation;
@property (nonatomic) long long segmentationInfillAlgorithm;
@property (nonatomic) BOOL segmentationDebugTintLayers;
@property (nonatomic) BOOL segmentationDisableCaching;
@property (nonatomic) BOOL segmentationDebugPreviewDisableClock;
@property (nonatomic) BOOL segmentationDebugPreviewHighQuality;
@property (nonatomic) double segmentationManualGatingLenience;
@property (copy, nonatomic) NSString *styleRecipeConfigDirectoryPath;
@property (nonatomic) long long parallaxStyleKeyLevelOverride;
@property (nonatomic) BOOL parallaxStyleAvoidColorWashBrownOverride;
@property (nonatomic) BOOL useStyleRecipeConfigDirectory;
@property (copy, nonatomic) NSString *parallaxLayoutConfigurationOverride;
@property (nonatomic) BOOL parallaxWallpaperDisableUpgrade;
@property (nonatomic) BOOL cinematicAllowYUVSourceInput;
@property (nonatomic) BOOL cinematicAllowRGB10Packed;

+ (id)PUEditSettings;
+ (id)globalSettings;
+ (id)editSettings;
+ (id)IPXEditSettings;

- (id)init;
- (void).cxx_destruct;

@end
