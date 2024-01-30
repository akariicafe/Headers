@class _UISceneEventResponse;

@interface _UISceneEventResponder : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sendLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    _UISceneEventResponse *_dataLock_first;
    _UISceneEventResponse *_dataLock_last;
}

- (void)enqueuePostSynchronizeResponse:(id /* block */)a0;
- (void)enqueuePostCommitResponse:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
