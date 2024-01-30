@interface FMFCore.FMFGenericResponseHandler : NSObject <FMFSessionDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ fmfSession;
    void /* unknown type, empty encoding */ fences;
    void /* unknown type, empty encoding */ isSnapshotMode;
    void /* unknown type, empty encoding */ locationShifter;
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ locationAlertsOnMeByMe;
    void /* unknown type, empty encoding */ locationAlertsOnMeByFriends;
    void /* unknown type, empty encoding */ locationAlertsOnFriendsByMe;
    void /* unknown type, empty encoding */ locationAlertsOnFriendsByFriends;
    void /* unknown type, empty encoding */ dataManager;
    void /* unknown type, empty encoding */ secureLocationManager;
}

- (void)didUpdateFences:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
