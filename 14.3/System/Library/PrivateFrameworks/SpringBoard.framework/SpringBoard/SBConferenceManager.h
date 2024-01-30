@class TUCallCenter;

@interface SBConferenceManager : NSObject {
    BOOL _hasFaceTimeCapability;
    struct MGNotificationTokenStruct { } *_faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)incomingFaceTimeCall;
- (BOOL)faceTimeIsAvailable;
- (BOOL)faceTimeInvitationExists;
- (BOOL)activeFaceTimeCallExists;
- (id)currentFaceTimeCall;
- (id)activeFaceTimeCall;
- (void)_faceTimeStateChanged:(id)a0;
- (BOOL)inFaceTime;
- (BOOL)inFaceTimeVideo;
- (BOOL)hasFaceTimeCapability;
- (void)endFaceTime;
- (BOOL)canStartFaceTime;

@end
