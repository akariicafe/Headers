@class NSString;

@interface RBSProcessBeforeTranslocationBundlePathPredicate : RBSProcessStringPredicate {
    NSString *_beforeTranslocationBundlePath;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (BOOL)matchesProcess:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)beforeTranslocationBundlePath;

@end
