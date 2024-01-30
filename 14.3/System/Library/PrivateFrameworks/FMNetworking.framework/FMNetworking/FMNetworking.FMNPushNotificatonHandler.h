@interface FMNetworking.FMNPushNotificatonHandler : NSObject <APSConnectionDelegate> {
    void /* unknown type, empty encoding */ topic;
    void /* unknown type, empty encoding */ apsQueue;
    void /* unknown type, empty encoding */ pendingTopicTokenFutures;
    void /* unknown type, empty encoding */ topicAPSToken;
    void /* unknown type, empty encoding */ publicAPSToken;
    void /* unknown type, empty encoding */ _apsConnection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_apsConnection;
}

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (void)connection:(id)a0 didReceiveMessageForTopic:(id)a1 userInfo:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
