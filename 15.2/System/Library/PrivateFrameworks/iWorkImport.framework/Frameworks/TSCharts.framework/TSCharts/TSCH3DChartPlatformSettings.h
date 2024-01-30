@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject {
    NSDictionary *_settings;
}

+ (id)sharedInstance;
+ (BOOL)isMetalExcludedWithCapabilities:(id)a0;
+ (BOOL)p_isMetalEnabled;
+ (id)p_defaultSettingsDictionary;
+ (id)p_platformSettingsDictionary;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)useMetal;
- (unsigned long long)resourceCacheMemoryLimitInBytes;
- (BOOL)shouldHandleResourceCacheOutOfMemory;
- (BOOL)useHighQualityShadows;
- (unsigned long long)highQualityShadowsSize;
- (BOOL)protectCachedShaders;
- (float)prefilteredLinesFilterRadius;
- (unsigned long long)labelMaxTextureSize;
- (BOOL)skipFirstMipmapLevel;
- (BOOL)useLayoutInwardForInsertionIcons;
- (BOOL)buildImageDefaultAntialias;
- (int)p_labelPickingSlackMethod;
- (float)p_labelPickingSlack;
- (unsigned long long)buildImageTileSize;
- (unsigned long long)buildMultisamples;
- (BOOL)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (BOOL)buildsUseLowDetailedGeometries;
- (BOOL)buildsCanUseDynamicShadows;
- (BOOL)buildTextureRendersAsSingleImage;
- (unsigned long long)buildFramebufferMemoryLimitInBytes;
- (unsigned long long)supersamplingTileSize;
- (unsigned long long)supersamplingSamples;
- (unsigned long long)insertionIconSupersamplingSamples;
- (double)printingDPI;
- (unsigned long long)printingMaxImageSize;
- (BOOL)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned long long)interactiveCanvasMultisamples;
- (BOOL)interactiveModeUsesFastPerformanceHint;
- (BOOL)knobTrackingUsesRealTimePerformanceHint;
- (BOOL)useInteractiveModeWhileSelected;
- (float)normalizedLabelPickingSlackForViewScale:(double)a0 viewport:(const void *)a1;
- (float)rotationTrackerSpeed;
- (BOOL)useTiledFullSizeInteractiveLayer;
- (double)backgroundLayoutContentsScaleFactor;
- (BOOL)backgroundLayoutUsesTiledRendering;

@end
