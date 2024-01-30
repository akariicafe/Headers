@class NSString, NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface NUGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

@property (class) BOOL renderJobDebug;
@property (class) BOOL renderJobDebugCaptureNodeGraphs;
@property (class) BOOL renderJobDebugCaptureNodeCache;
@property (class) BOOL renderJobDebugCaptureCanceledJobs;
@property (class) BOOL renderJobDebugCapturePerfStatHistory;
@property (class) BOOL renderJobDebugCaptureOnlyPerfStats;
@property (class) BOOL renderJobDebugCapture5PercentOfJobs;
@property (class, retain) NSString *tempDir;
@property (class, readonly) BOOL deviceDisableMetal;
@property (class) BOOL devicePrintRenderer;
@property (class) long long deviceDefaultSampleMode;
@property (class) BOOL rendererUseHalfFloat;
@property (class) BOOL rendererClampToAlpha;
@property (class) BOOL rendererUseP3Linear;
@property (class) long long storagePoolNonPurgeableLimit;
@property (class) long long storagePoolPurgeableLimit;
@property (class) double storagePoolMigrationDelay;
@property (class) BOOL surfaceStorageFactoryUsePool;
@property (class) BOOL bufferStorageFactoryUsePool;
@property (class) BOOL imageRenderJobUseSurfaceRenderer;
@property (class) BOOL imageRenderJobUseTextureRenderer;
@property (class) double renderJSPipelineTimeout;
@property (class) long long imageTileSize;
@property (class) long long imageTileBorder;
@property (class) BOOL imageSourceDisableRAW;
@property (class) BOOL imageSourceDisableCacheImmediately;
@property (class) long long cacheNodeCacheSizeLimit;
@property (class) long long cacheNodeFilePermissions;
@property (class) double cacheNodeImageCompression;
@property (class, getter=isViewDebugEnabled) BOOL viewDebugEnabled;
@property (class, retain) NSURL *cacheNodeDirectoryURL;
@property (class) BOOL renderVideoLive;
@property (class) BOOL platformHasWideColor;
@property (class, retain) NSURL *pipelineSourceURL;
@property (class) BOOL imageLayerDebug;
@property (class) BOOL displayDisableDeepColor;
@property (class) BOOL displayForceDeepColor;
@property (class) BOOL displayDisableColorMatching;
@property (class) BOOL renderTransparencyOverBlack;
@property (class) BOOL renderTransparencyOpaque;
@property (class) BOOL logPeakRenderCIUsuage;
@property (class) BOOL runNeutrinoSynchronously;
@property (class) BOOL disableIOSurfacePortaitExport;
@property (class) BOOL enableHDRSupport;
@property (class) BOOL allAssetsCanUseHDRPipeline;
@property (class, readonly) double HLGOpticalScale;
@property (class) BOOL disablePacked10BitPixelFormats;
@property (class) unsigned long long videoCompositorDebugMode;
@property (class) BOOL forceSoftwareVideoEncoder;
@property (class) BOOL alwaysRequireHardwareVideoEncoder;
@property (class, retain) NSString *debugRenderBlue;
@property (class, retain) NSString *debugRenderPurple;
@property (class, retain) NSString *debugRenderYellow;
@property (class) BOOL disableMeteorGainMapGeneration;
@property (class) BOOL enforceMinimumBitRateForExportedVideos;
@property (class) BOOL enforceMinimumBitRateForCinematicVideos;

+ (id)globalSettings;
+ (void)setUpCacheNodeDirectoryWithComponent:(id)a0;
+ (void)reset;

- (double)doubleSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)stringSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)urlSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (long long)integerSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)boolSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)_settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (void)reset;

@end
