@class CNContactStore, NSArray, NSHashTable, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PKPeerPaymentContactResolver : NSObject {
    NSObject<OS_dispatch_queue> *_replyQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
}

@property (retain, nonatomic) NSCache *handleToContactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSHashTable *delegates;
@property (readonly, nonatomic) NSArray *keysToFetch;

- (void)removeDelegate:(id)a0;
- (void)invalidateCache;
- (void)addDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_predicateForHandle:(id)a0;
- (void)_handleContactStoreDidChangeNotification:(id)a0;
- (void)_accessDelegatesWithHandler:(id /* block */)a0;
- (BOOL)haveCachedResultForHandle:(id)a0;
- (void)contactForHandles:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithContactStore:(id)a0 keysToFetch:(id)a1;
- (id)contactForHandle:(id)a0;
- (void)contactForHandle:(id)a0 withCompletion:(id /* block */)a1;

@end
