@class NSString, BKSProcessAssertion;

@interface _UIFenceTask : NSObject <BSInvalidatable> {
    unsigned long long _identifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
    BKSProcessAssertion *_assertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_processRequiresFenceAssertions;

@end
