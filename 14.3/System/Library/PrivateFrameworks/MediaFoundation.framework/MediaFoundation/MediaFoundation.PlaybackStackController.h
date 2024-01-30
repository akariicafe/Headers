@class NSDictionary;

@interface MediaFoundation.PlaybackStackController : _TtCs12_SwiftObject <MFStateDumpable, MFResettable, MFAudioSessionControlling> {
    void /* unknown type, empty encoding */ queueController;
    void /* unknown type, empty encoding */ queueAssetLoader;
    void /* unknown type, empty encoding */ playerController;
    void /* unknown type, empty encoding */ reporter;
    void /* unknown type, empty encoding */ internalController;
    void /* unknown type, empty encoding */ errorController;
    void /* unknown type, empty encoding */ backgroundTaskController;
    void /* unknown type, empty encoding */ currentSetQueueIdentifier;
}

@property (nonatomic, readonly) NSDictionary *stateDictionary;

- (void)reset;
- (BOOL)setAudioSessionActive:(BOOL)a0 withOptions:(unsigned long long)a1 error:(id *)a2;
- (void)updateAudioSessionWithConfiguration:(id)a0;

@end
