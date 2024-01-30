@class NSString, NSArray, AVHapticPlayerChannel, CHHapticEngine;

@interface PatternPlayer : NSObject <CHHapticPatternPlayer, PatternPlayerDetails> {
    CHHapticEngine *_engine;
    AVHapticPlayerChannel *_channel;
    NSArray *_events;
    int _muteState;
    unsigned char _previousAction;
}

@property (readonly) double patternDuration;
@property BOOL isMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)startAtTime:(double)a0 error:(id *)a1;
- (BOOL)sendParameters:(id)a0 atTime:(double)a1 error:(id *)a2;
- (BOOL)stopAtTime:(double)a0 error:(id *)a1;
- (BOOL)cancelAndReturnError:(id *)a0;
- (void)doSetMute:(BOOL)a0;
- (void)clearExternalResources:(id)a0;
- (BOOL)needsResetForAction:(unsigned char)a0;
- (BOOL)scheduleParameterCurve:(id)a0 atTime:(double)a1 error:(id *)a2;
- (id)initWithPlayable:(id)a0 engine:(id)a1 privileged:(BOOL)a2 error:(id *)a3;

@end
