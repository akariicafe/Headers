@class NSString, NSObject;
@protocol OS_nw_array, OS_nw_dictionary, OS_nw_parameters, OS_xpc_object, OS_dispatch_queue, OS_nw_listener;

@interface NWConcrete_nw_service_connector : NSObject <OS_nw_service_connector> {
    NSObject<OS_nw_listener> *listener;
    unsigned int state;
    NSObject<OS_nw_parameters> *clientParameters;
    NSObject<OS_dispatch_queue> *serviceConnectorQueue;
    unsigned long long uniqueID;
    unsigned short localPortHBO;
    unsigned char retryCounterForAddressInUse;
    void *retryAddrInUseTimer;
    id /* block */ serviceAvailableBlock;
    NSObject<OS_nw_array> *pendingUnverifiedIncomingRequests;
    NSObject<OS_nw_dictionary> *pendingIncomingRequests;
    NSObject<OS_nw_dictionary> *activeConnections;
    NSObject<OS_nw_dictionary> *activeOutgoingRequests;
    NSObject<OS_xpc_object> *remotePubKeys;
    unsigned char localPrivKey[32];
    unsigned char localPubKey[32];
    unsigned char useLargeUUIDForTesting : 1;
    unsigned char failConnectionAfterVerificationFailsForTesting : 1;
    unsigned char failConnectionAfterVerificationPassesForTesting : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
