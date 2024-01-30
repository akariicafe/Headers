@class PVColorSpace;

@interface PVVideoCompositingContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property int gpuRenderAPI;
@property int numCPUThreads;
@property int bufferFormat;
@property int shaderFormat;
@property int filterMode;
@property BOOL concatenationFlag;
@property int tileSize;
@property int pageSize;
@property BOOL textureBorder;
@property BOOL dynamicPlayback;
@property int renderGraphDumpLevel;
@property BOOL renderStatsFlag;
@property int renderStatsWarmUp;
@property int renderStatsMaxVals;
@property int dotGraphLevel;
@property int traceGLLevel;
@property (nonatomic) int traceMetalLevel;
@property (nonatomic) int signPostLevel;
@property (nonatomic) int instructionGraphDumpLevel;
@property (nonatomic) int instructionGraphDotTreeLevel;
@property (nonatomic) int pmrLevel;
@property (nonatomic) int perfStatsLogLevel;
@property (nonatomic) int workingColorSpaceConformIntent;
@property (retain, nonatomic) PVColorSpace *workingColorSpace;
@property (retain, nonatomic) PVColorSpace *outputColorSpace;
@property (nonatomic) int renderDevice;
@property (nonatomic) BOOL powerFriendlyExport;
@property (nonatomic) int conformColorSpacesToDestinationBufferSpace;

+ (id)createContextForGPU;
+ (id)dotGraphLoggingDirectory;
+ (id)createContextForCPU;

- (id)initWithDevice:(int)a0;
- (void).cxx_destruct;
- (void)setContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setIntermediateBufferFormatForWorkingColorSpace;
- (void)dumpContext;

@end
