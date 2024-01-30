@class NURenderContext, NSArray, NSString, NUColorSpace, NSMutableDictionary, NUComposition, NURenderJob;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {
    NSMutableDictionary *_sourceIdentifiersByTrackID;
}

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSArray *requiredSourceTrackIDs;
@property (weak, nonatomic) NURenderJob *renderJob;
@property (copy, nonatomic) NSString *name;
@property (retain) NURenderContext *renderContext;
@property (retain, nonatomic) NUComposition *adjustmentComposition;
@property (retain, nonatomic) NSArray *pipelineFilters;
@property (nonatomic) struct { long long numerator; long long denominator; } renderScale;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) long long sampleMode;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instructionForVideoTrack:(id)a0;
+ (id)instructionFromBase:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setSourceIdentifier:(id)a0 forTrackID:(id)a1;
- (id)sourceIdentifierForTrackID:(id)a0;
- (BOOL)isEqualToInstruction:(id)a0;

@end
