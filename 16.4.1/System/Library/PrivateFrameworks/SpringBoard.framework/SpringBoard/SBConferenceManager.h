@class TUCallCenter;

@interface SBConferenceManager : NSObject {
    BOOL _hasFaceTimeCapability;
    struct MGNotificationTokenStruct { } *_faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (id)sharedInstance;
+ (void)initialize;

- (void)_faceTimeStateChanged:(id)a0;
- (BOOL)inFaceTimeVideo;
- (void)endFaceTime;
- (BOOL)activeFaceTimeCallExists;
- (BOOL)inFaceTime;
- (id)incomingFaceTimeCall;
- (id)activeFaceTimeCall;
- (BOOL)faceTimeIsAvailable;
- (BOOL)hasFaceTimeCapability;
- (void)dealloc;
- (id)currentFaceTimeCall;
- (id)init;
- (BOOL)faceTimeInvitationExists;
- (void).cxx_destruct;
- (BOOL)canStartFaceTime;

@end
