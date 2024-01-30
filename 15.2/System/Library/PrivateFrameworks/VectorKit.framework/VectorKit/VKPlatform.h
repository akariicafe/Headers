@interface VKPlatform : NSObject {
    int _numCPUs;
    BOOL _isMac;
    BOOL _lowPerformanceDevice;
}

@property (readonly, nonatomic) BOOL roadsWithSimpleLineMeshesAvailable;
@property (readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
@property (readonly, nonatomic) BOOL supportsHiResRTT;
@property (readonly, nonatomic) BOOL isPad;
@property (readonly, nonatomic) BOOL isMac;
@property (readonly, nonatomic) BOOL isIphone;
@property (readonly, nonatomic) BOOL shouldDrawWhenReady;
@property (readonly, nonatomic) BOOL shouldStyleLabelsInParallel;
@property (readonly, nonatomic) BOOL canMakeSharingThumbnails;
@property (readonly, nonatomic) BOOL supportsBuildingShadows;
@property (readonly, nonatomic) BOOL supportsBuildingStrokes;
@property (readonly, nonatomic) BOOL supports3DBuildingStrokes;
@property (readonly, nonatomic) BOOL supportsHiResBuildings;
@property (readonly, nonatomic) BOOL supports3DBuildings;
@property (readonly, nonatomic) BOOL supportsPerFragmentLighting;
@property (readonly, nonatomic) BOOL supportsCoastlineGlows;
@property (readonly, nonatomic) BOOL proceduralRoadAlpha;
@property (readonly, nonatomic) BOOL useCheapTrafficShader;
@property (readonly, nonatomic) unsigned long long memorySize;
@property (readonly, nonatomic) unsigned char explicitDefaultRefreshRate;
@property (readonly, nonatomic) unsigned char tileDecodeQueueWidth;
@property (readonly, nonatomic) unsigned char processingQueueWidth;
@property (readonly, nonatomic) BOOL lowPerformanceDevice;
@property (readonly, nonatomic) double routeLineSimplificationEpsilon;
@property (readonly, nonatomic) BOOL supportsARMode;
@property (readonly, nonatomic) BOOL reduceMotionEnabled;

+ (id)sharedPlatform;

- (id)init;
- (unsigned long long)_calculateMemSize;
- (void)_determineHardware;
- (void)dealloc;
- (unsigned long long)tileMaximumLimit:(unsigned long long)a0;

@end
