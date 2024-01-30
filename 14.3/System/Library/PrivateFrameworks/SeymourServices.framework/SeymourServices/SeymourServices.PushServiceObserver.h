@interface SeymourServices.PushServiceObserver : NSObject <APSConnectionDelegate> {
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ container;
}

- (void)connection:(id)a0 didReceivePublicToken:(id)a1;
- (void)connection:(id)a0 didReceiveIncomingMessage:(id)a1;
- (void)connection:(id)a0 didReceiveToken:(id)a1 forTopic:(id)a2 identifier:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
