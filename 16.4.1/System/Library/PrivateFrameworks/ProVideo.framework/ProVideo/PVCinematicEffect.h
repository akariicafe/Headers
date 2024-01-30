@class AVAsset, NSDictionary, PTCinematographyScript, PTGlobalRenderingMetadataVersion1;

@interface PVCinematicEffect : PVHeliumEffect {
    AVAsset *_avasset;
    PTCinematographyScript *_script;
    NSDictionary *_currentCinemtography;
    BOOL _isReady;
    PTGlobalRenderingMetadataVersion1 *_ptGlobalRenderingMetadata;
    struct CGSize { double width; double height; } _videoTrackSize;
}

@property (nonatomic) unsigned long long quality;
@property (nonatomic) double clipOffset;
@property (nonatomic) double clipStart;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } postEffectTransform;

+ (long long)memorySize;
+ (BOOL)deviceSupportsRendering:(id)a0;
+ (BOOL)deviceSupportsTracking:(id)a0;
+ (BOOL)enoughMemoryForHDR;
+ (void)handleApplicationDidReceiveMemoryWarning;
+ (BOOL)hasAppleNeuralEngine;
+ (BOOL)hasMoreThan2GBOfMemory;
+ (BOOL)isCinematicSupported:(id)a0;
+ (void)registerEffectWithID:(id)a0 displayName:(id)a1;

- (BOOL)isReady;
- (struct CGSize { double x0; double x1; })outputSize;
- (BOOL)setAsset:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (struct HGRef<HGNode> { struct HGNode *x0; })hgNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 inputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (void)setupGlobalMetadata;
- (void)updateDictionary:(id)a0 completion:(id /* block */)a1;

@end
