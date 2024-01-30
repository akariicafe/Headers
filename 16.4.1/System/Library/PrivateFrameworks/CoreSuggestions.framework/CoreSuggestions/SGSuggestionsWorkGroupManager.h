@class _PASLock;

@interface SGSuggestionsWorkGroupManager : NSObject {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (void)finishProcessingForUniqueIdentifier:(id)a0;
- (void)waitForUniqueIdentifierToProcess:(id)a0;
- (void)waitForUniqueIdentifierToProcess:(id)a0 withTimeout:(double)a1;

@end
