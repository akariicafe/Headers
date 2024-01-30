@class TUCallCenter;

@interface SBConferenceManager : NSObject {
    BOOL _hasFaceTimeCapability;
    struct MGNotificationTokenStruct { } *_faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (id)sharedInstance;
+ (void)initialize;

- (id)incomingFaceTimeCall;
- (void)_faceTimeStateChanged:(id)a0;
- (BOOL)inFaceTimeVideo;
- (id)activeFaceTimeCall;
- (void)endFaceTime;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasFaceTimeCapability;
- (BOOL)inFaceTime;
- (id)currentFaceTimeCall;
- (BOOL)canStartFaceTime;
- (void)dealloc;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)faceTimeIsAvailable;
- (BOOL)faceTimeInvitationExists;

@end
