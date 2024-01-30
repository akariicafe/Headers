@class NSString, AVHapticPlayerChannel;

@interface PatternPlayer : PatternPlayerBase <CHHapticPatternPlayerExtended> {
    AVHapticPlayerChannel *_channel;
}

@property BOOL isMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)sendParameters:(id)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)startAtTime:(double)a0 error:(id *)a1;
- (BOOL)startAtTime:(double)a0 withImmediateParameters:(id)a1 error:(id *)a2;
- (BOOL)stopAtTime:(double)a0 error:(id *)a1;
- (BOOL)cancelAndReturnError:(id *)a0;
- (void)clearExternalResources:(id)a0;
- (void)doSetMute:(BOOL)a0;
- (id)initWithPlayable:(id)a0 engine:(id)a1 privileged:(BOOL)a2 error:(id *)a3;
- (id)processImmediateParameters:(id)a0;
- (void)releaseExternalResources:(id)a0 events:(id)a1;
- (BOOL)scheduleParameterCurve:(id)a0 atTime:(double)a1 error:(id *)a2;

@end
