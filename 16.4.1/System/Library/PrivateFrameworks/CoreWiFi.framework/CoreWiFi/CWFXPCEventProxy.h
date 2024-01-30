@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, CWFXPCEventProxyDelegate;

@interface CWFXPCEventProxy : NSObject <CWFXPCEventProtocolPrivate, CWFXPCEventProtocolPublic> {
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableDictionary *_mutableEventAckMap;
}

@property (retain) id<CWFXPCEventProxyDelegate> delegate;

- (void)receivedAcknowledgedXPCEvent:(id)a0 reply:(id /* block */)a1;
- (void)receivedXPCEvent:(id)a0;
- (void)__acknowledgeEventWithUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
