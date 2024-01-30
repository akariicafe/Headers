@class NSDictionary;

@interface TSCH3DChartPlatformSettings : NSObject {
    NSDictionary *_settings;
}

+ (id)sharedInstance;
+ (BOOL)isMetalExcludedWithCapabilities:(id)a0;
+ (id)p_defaultSettingsDictionary;
+ (BOOL)p_isMetalEnabled;
+ (id)p_platformSettingsDictionary;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)useMetal;
- (unsigned long long)resourceCacheMemoryLimitInBytes;
- (BOOL)useInteractiveModeWhileSelected;
- (double)backgroundLayoutContentsScaleFactor;
- (BOOL)backgroundLayoutUsesTiledRendering;
- (unsigned long long)buildFramebufferMemoryLimitInBytes;
- (BOOL)buildImageDefaultAntialias;
- (unsigned long long)buildImageTileSize;
- (unsigned long long)buildMultisamples;
- (BOOL)buildShouldDiscardBuffers;
- (double)buildTargetFPS;
- (BOOL)buildTextureRendersAsSingleImage;
- (BOOL)buildsCanUseDynamicShadows;
- (BOOL)buildsUseLowDetailedGeometries;
- (unsigned long long)highQualityShadowsSize;
- (unsigned long long)insertionIconSupersamplingSamples;
- (BOOL)interactiveCanvasCanUseHighQualityRenderer;
- (unsigned long long)interactiveCanvasMultisamples;
- (BOOL)interactiveModeUsesFastPerformanceHint;
- (BOOL)knobTrackingUsesRealTimePerformanceHint;
- (unsigned long long)labelMaxTextureSize;
- (float)normalizedLabelPickingSlackForViewScale:(double)a0 viewport:(const void *)a1;
- (float)p_labelPickingSlack;
- (int)p_labelPickingSlackMethod;
- (float)prefilteredLinesFilterRadius;
- (double)printingDPI;
- (unsigned long long)printingMaxImageSize;
- (BOOL)protectCachedShaders;
- (float)rotationTrackerSpeed;
- (BOOL)shouldHandleResourceCacheOutOfMemory;
- (BOOL)skipFirstMipmapLevel;
- (unsigned long long)supersamplingSamples;
- (unsigned long long)supersamplingTileSize;
- (BOOL)useHighQualityShadows;
- (BOOL)useLayoutInwardForInsertionIcons;
- (BOOL)useTiledFullSizeInteractiveLayer;

@end
