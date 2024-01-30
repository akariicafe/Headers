@class NSString, CUTWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface _IDSRealTimeEncryptionProxy : NSObject <IDSDaemonListenerProtocol> {
    NSString *_uniqueID;
    NSString *_accountID;
    CUTWeakReference *_delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)dealloc;
- (void)xpcObject:(id)a0 objectContext:(id)a1;
- (void).cxx_destruct;
- (void)requestMasterKeyMaterialForGroup:(id)a0;
- (void)requestPublicKeys;
- (void)resetKeysForGroup:(id)a0;
- (void)sendMKMRecoveryRequestToGroup:(id)a0;
- (void)sendMasterKeyMaterialToGroup:(id)a0;
- (void)sendPrekeyToGroup:(id)a0;

@end
