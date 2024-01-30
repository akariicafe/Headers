@interface SiriFindMy.FindFriendIntentHandler : NSObject <FindFriendIntentHandling> {
    void /* unknown type, empty encoding */ deviceState;
    void /* unknown type, empty encoding */ sessionManager;
}

- (void).cxx_destruct;
- (id)init;
- (void)resolveFriendForFindFriend:(id)a0 withCompletion:(id /* block */)a1;
- (void)confirmFindFriend:(id)a0 completion:(id /* block */)a1;
- (void)handleFindFriend:(id)a0 completion:(id /* block */)a1;

@end
