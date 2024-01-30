@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CWFXPCEventProxyDelegate;

@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocolPrivate, CWFXPCEventProtocolPublic> {
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventAckMap;
}

@property (retain) id<CWFXPCEventProxyDelegate> delegate;

- (void)__acknowledgeEventWithUUID:(id)a0;
- (void)receivedAcknowledgedXPCEvent:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)receivedXPCEvent:(id)a0;

@end
