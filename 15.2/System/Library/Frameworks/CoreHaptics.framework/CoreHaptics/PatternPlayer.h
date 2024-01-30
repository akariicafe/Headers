@class NSString, AVHapticPlayerChannel;

@interface PatternPlayer : PatternPlayerBase <CHHapticPatternPlayer> {
    AVHapticPlayerChannel *_channel;
}

@property BOOL isMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)cancelAndReturnError:(id *)a0;
- (void)clearExternalResources:(id)a0;
- (id)init;
- (BOOL)scheduleParameterCurve:(id)a0 atTime:(double)a1 error:(id *)a2;
- (id)initWithPlayable:(id)a0 engine:(id)a1 privileged:(BOOL)a2 error:(id *)a3;
- (void)dealloc;
- (void)doSetMute:(BOOL)a0;
- (BOOL)startAtTime:(double)a0 error:(id *)a1;
- (BOOL)sendParameters:(id)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)stopAtTime:(double)a0 error:(id *)a1;

@end
