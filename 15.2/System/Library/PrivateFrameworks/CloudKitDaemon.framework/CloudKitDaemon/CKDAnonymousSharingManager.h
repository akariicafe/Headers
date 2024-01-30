@class CKDZonePCSData, NSObject, CKDContainer;
@protocol OS_dispatch_queue;

@interface CKDAnonymousSharingManager : NSObject

@property (weak, nonatomic) CKDContainer *container;
@property (retain, nonatomic) CKDZonePCSData *zonePCSData;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue;

- (id)pcsManager;
- (id)pcsCache;
- (id)initWithContainer:(id)a0;
- (void).cxx_destruct;
- (void)removeAnonymousSharesfromSharedDB:(id)a0 operation:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)_lockedFetchSystemZonePCSDataWithCompletion:(id /* block */)a0;
- (void)encryptShareTuples:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)_locked_encryptShareTuples:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)_generateHashIdentifierForAnonymousShareTuple:(id)a0;
- (void)_locked_decryptShareTuple:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)addAnonymousSharesToSharedDB:(id)a0 operation:(id)a1 withCompletionBlock:(id /* block */)a2;
- (void)decryptShareTuple:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
