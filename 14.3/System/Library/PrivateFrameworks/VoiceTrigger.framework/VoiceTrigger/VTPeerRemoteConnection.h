@class NSString, NSMutableDictionary, NSObject, IDSService;
@protocol OS_dispatch_queue, VTPeerRemoteConnectionDelegate;

@interface VTPeerRemoteConnection : NSObject <IDSServiceDelegate> {
    NSString *_identifier;
    BOOL _requireNearbyPeer;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_idsService;
    NSMutableDictionary *_completions;
    NSMutableDictionary *_responseClasses;
    id<VTPeerRemoteConnectionDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serviceIdentifier;
- (void)service:(id)a0 account:(id)a1 identifier:(id)a2 didSendWithSuccess:(BOOL)a3 error:(id)a4;
- (void).cxx_destruct;
- (id)_service;
- (id)_pairedDevice;
- (void)service:(id)a0 account:(id)a1 incomingUnhandledProtobuf:(id)a2 fromID:(id)a3 context:(id)a4;
- (id)_account;
- (id)_destination;
- (id)initWithServiceIdentifier:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)hasPeer;
- (id)initWithServiceIdentifier:(id)a0 requireNearbyPeer:(BOOL)a1;
- (void)_invokeCompletionForIdentifier:(id)a0 response:(id)a1 error:(id)a2;
- (void)_sendResponse:(id)a0 forRequestId:(id)a1;
- (id)_wrappedSendFailureError:(id)a0;
- (BOOL)_hasNearbyPeer;
- (void)sendRequestType:(unsigned long long)a0 nonWaking:(BOOL)a1;

@end
