@class NSDictionary, NSString;

@interface MediaFoundation.PlaybackStackController : _TtCs12_SwiftObject <MFStateDumpable, MFResettable, MFAudioSessionControlling, MFStackModeConfigurable, MFPlayerConfigurable> {
    void /* unknown type, empty encoding */ playerID;
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
@property (nonatomic, readonly) NSString *modeDescription;
@property (nonatomic, readonly) BOOL isModeSolo;
@property (nonatomic, readonly) BOOL isModeShared;
@property (nonatomic, readonly) BOOL isModeManagedSession;

- (void)setRelativeVolume:(float)a0;
- (void)reset;
- (void)setupForManagedSessionWithAudioSession:(id)a0;
- (void)updateAudioSessionWithConfiguration:(id)a0;
- (void)activateAudioSessionWithCompletion:(id /* block */)a0;
- (void)setupForSolo;
- (void)setupForShared;
- (void)setSpatializationFormat:(long long)a0;

@end
