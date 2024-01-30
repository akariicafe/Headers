@class NSString, RBSAssertion;

@interface SBBackgroundFetchTask : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_bundleID;
    int _sequenceNumber;
    RBSAssertion *_lock_assertion;
    id /* block */ _lock_completionHandler;
    BOOL _lock_finished;
}

+ (int)_nextSequenceNumber;

- (void).cxx_destruct;
- (void)dealloc;
- (void)execute;
- (id)description;

@end
