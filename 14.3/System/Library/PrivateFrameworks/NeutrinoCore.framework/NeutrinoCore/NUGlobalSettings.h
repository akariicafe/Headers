@class NSURL, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NUGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

@property (class, readonly) BOOL deviceDisableMetal;
@property (class, readonly) BOOL deviceDisableOpenGL;
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
@property (class) BOOL tileAssemblyCABased;
@property (class) BOOL runNeutrinoSynchronously;
@property (class) BOOL enableHDRSupport;
@property (class) BOOL allAssetsCanUseHDRPipeline;
@property (class, readonly) double HLGOpticalScale;
@property (class) BOOL disablePacked10BitPixelFormats;
@property (class) unsigned long long videoCompositorDebugMode;
@property (class) BOOL alwaysRequireHardwareVideoEncoder;
@property (class) BOOL disableMeteorGainMapGeneration;

+ (void)reset;
+ (id)globalSettings;
+ (void)setUpCacheNodeDirectoryWithComponent:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (id)settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)_settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (BOOL)boolSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (long long)integerSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (double)doubleSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)stringSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)urlSettingForKey:(id)a0 defaultValue:(id /* block */)a1;

@end
