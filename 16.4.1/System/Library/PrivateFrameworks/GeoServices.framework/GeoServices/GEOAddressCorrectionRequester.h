@class NSMapTable;

@interface GEOAddressCorrectionRequester : NSObject {
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingRequestsLock;
}

+ (id)sharedRequester;

- (void)cancelRequest:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)startAddressCorrectionInitRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;
- (void)startAddressCorrectionUpdateRequest:(id)a0 finished:(id /* block */)a1 error:(id /* block */)a2;

@end
