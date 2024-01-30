@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } *_sourceClock;
    struct OpaqueCMClock { } *_masterClock;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } sourceTime; struct { long long value; int timescale; unsigned int flags; long long epoch; } syncedTime; } _ptsSyncHistory[16];
    int _oldestPTSSyncHistoryElement;
    int _newestPTSSyncHistoryElement;
}

+ (void)initialize;

- (void)handleDroppedSample:(id)a0 forInput:(id)a1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (struct OpaqueCMClock { } *)masterClock;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (struct OpaqueCMClock { } *)sourceClock;
- (void)_synchronizeDetectedFaces:(id)a0 metadata:(id)a1 timescale:(int)a2;
- (struct opaqueCMSampleBuffer { } *)_newRetimedVideoSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 updatePTSSyncHistory:(BOOL)a1;
- (void)setMasterClock:(struct OpaqueCMClock { } *)a0;
- (void)_updatePTSSyncHistoryWithSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 syncedTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithMediaType:(unsigned int)a0;
- (void)setSourceClock:(struct OpaqueCMClock { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_getSyncedTimeForSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
