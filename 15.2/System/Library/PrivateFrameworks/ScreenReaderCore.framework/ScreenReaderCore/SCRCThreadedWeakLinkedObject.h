@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject {
    NSLock *_releaseLock;
    int _referenceCount;
    BOOL _calledDealloc;
}

- (void).cxx_destruct;
- (id)init;

@end
