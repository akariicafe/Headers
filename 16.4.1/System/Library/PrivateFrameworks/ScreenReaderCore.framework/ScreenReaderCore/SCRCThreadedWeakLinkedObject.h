@class NSLock;

@interface SCRCThreadedWeakLinkedObject : NSObject {
    NSLock *_releaseLock;
    int _referenceCount;
    BOOL _calledDealloc;
}

- (id)init;
- (void).cxx_destruct;

@end
