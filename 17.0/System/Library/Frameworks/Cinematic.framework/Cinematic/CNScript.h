@class PTCinematographyScript, NSArray, NSObject;
@protocol OS_dispatch_queue;

@interface CNScript : NSObject

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) PTCinematographyScript *internalScript;
@property (readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property float fNumber;
@property (readonly) NSArray *addedDetectionTracks;

+ (void)loadFromAsset:(id)a0 changes:(id)a1 progress:(id)a2 completionHandler:(id /* block */)a3;

- (id)changes;
- (void).cxx_destruct;
- (id)decisionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)framesInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)primaryDecisionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)removeAllUserDecisions;
- (BOOL)removeUserDecision:(id)a0;
- (id)userDecisionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (BOOL)addUserDecision:(id)a0;
- (id)baseDecisionsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)decisionAfterTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)decisionBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)frameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 tolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)secondaryDecisionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeOfTransitionAfterDecision:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeOfTransitionBeforeDecision:(id)a0;
- (id)_initWithInternalScript:(id)a0;
- (long long)addDetectionTrack:(id)a0;
- (id)changesTrimmedByTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)decisionAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 tolerance:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)detectionTrackForDecision:(id)a0;
- (id)detectionTrackForID:(long long)a0;
- (void)reloadWithChanges:(id)a0;
- (BOOL)removeDetectionTrack:(id)a0;

@end
