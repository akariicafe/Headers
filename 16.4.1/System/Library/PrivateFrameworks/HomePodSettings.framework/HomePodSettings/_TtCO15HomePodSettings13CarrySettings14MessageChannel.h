@class COMessageSessionProducer, COMessageSessionConsumer, COMessageSessionRequest, COClusterMemberRoleSnapshot, COMessageSessionResponse;

@interface _TtCO15HomePodSettings13CarrySettings14MessageChannel : NSObject <COMessageSessionConsumerDelegate, COMessageSessionProducerDelegate> {
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ callbackMediators;
    void /* unknown type, empty encoding */ channelLoader;
    void /* unknown type, empty encoding */ dataModelUpdateSubject;
    void /* unknown type, empty encoding */ dataModelUpdateTokens;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ installProfileSubject;
    void /* unknown type, empty encoding */ installProfileTokens;
    void /* unknown type, empty encoding */ foundSubject;
    void /* unknown type, empty encoding */ lostSubject;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (void)channel:(id)a0 didAddConsumer:(id)a1;
- (void)channel:(id)a0 didAddProducer:(id)a1;
- (void)channel:(id)a0 didFailToAddConsumerWithSubTopic:(id)a1 error:(id)a2;
- (void)channel:(id)a0 didFailToAddProducerWithSubTopic:(id)a1 error:(id)a2;
- (void)consumer:(id)a0 didStartSession:(id)a1;
- (void)consumer:(id)a0 didStopSession:(id)a1 initiator:(id)a2 notice:(id)a3 error:(id)a4;
- (void)consumer:(COMessageSessionConsumer *)a0 shouldStartSessionWithMember:(COClusterMemberRoleSnapshot *)a1 request:(COMessageSessionRequest *)a2 completionHandler:(void (^)(BOOL, COMessageSessionResponse *))a3;
- (void)producer:(id)a0 didFailToStartSessionWithMember:(id)a1 error:(id)a2;
- (void)producer:(id)a0 didStartSession:(id)a1 member:(id)a2 response:(id)a3;
- (void)producer:(id)a0 didStopSession:(id)a1 initiator:(id)a2 notice:(id)a3 error:(id)a4;
- (void)producer:(COMessageSessionProducer *)a0 shouldStartSessionWithMember:(COClusterMemberRoleSnapshot *)a1 completionHandler:(void (^)(BOOL, COMessageSessionRequest *))a2;

@end
