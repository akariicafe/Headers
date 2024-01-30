@interface FMFCore.FMFGenericResponseHandler : NSObject <FMFSessionDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ fmfSession;
    void /* unknown type, empty encoding */ fences;
    void /* unknown type, empty encoding */ locationShifter;
    void /* unknown type, empty encoding */ updateQueue;
    void /* unknown type, empty encoding */ locationAlertsOnMeByMe;
    void /* unknown type, empty encoding */ locationAlertsOnMeByFriends;
    void /* unknown type, empty encoding */ locationAlertsOnFriendsByMe;
    void /* unknown type, empty encoding */ locationAlertsOnFriendsByFriends;
    void /* unknown type, empty encoding */ dataManager;
}

- (void)didUpdateFences:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
