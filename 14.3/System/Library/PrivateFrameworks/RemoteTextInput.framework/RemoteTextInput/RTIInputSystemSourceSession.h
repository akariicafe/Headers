@class NSString, RTIDataPayload;
@protocol RTIInputSystemPayloadDelegate;

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate>

@property (weak, nonatomic) id<RTIInputSystemPayloadDelegate> payloadDelegate;
@property (weak, nonatomic) id<RTIInputSystemPayloadDelegate> forwardingPayloadDelegate;
@property (readonly, copy, nonatomic) RTIDataPayload *currentForwardingDataPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)flushOperations;
- (void)addSessionDelegate:(id)a0;
- (void)setSessionDelegate:(id)a0;
- (void)handleTextActionPayload:(id)a0;
- (void)handleForwardingResponseActionPayload:(id)a0;

@end
