@class NSUUID, TUConversationActivitySession;

@interface CPActivitySession : NSObject <RBSAssertionObserving, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ activityInterval;
    void /* unknown type, empty encoding */ terminatingHandle;
    void /* unknown type, empty encoding */ isFirstJoin;
    void /* unknown type, empty encoding */ domainAssertion;
    void /* unknown type, empty encoding */ distributionCount;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ isLocallyInitiated;
    void /* unknown type, empty encoding */ isLightweightPrimaryInitiated;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ activeParticipantsUpdateItem;
    void /* unknown type, empty encoding */ activeParticipants;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ connection;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ activity;
@property (nonatomic, readonly) TUConversationActivitySession *tuConversationActivitySession;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ endpoint;

- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)assertionWillInvalidate:(id)a0;
- (void)resetSession;
- (void)updateActivityImage:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)permitJoin;

@end
