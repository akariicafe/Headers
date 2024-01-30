@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKPaymentHostEndpointRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_registrySerialQueue;
    NSMutableDictionary *_hostIdentifierToEndpointMap;
    NSMutableDictionary *_processIdentifierToHostIdentifiersMap;
}

- (id)init;
- (id)takeListenerEndpointForHostIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)addListenerEndpoint:(id)a0 forHostIdentifier:(id)a1 processIdentifier:(int)a2;
- (id)debugDescription;
- (void)removeListenerEndpointsForProcessIdentifier:(int)a0;

@end
