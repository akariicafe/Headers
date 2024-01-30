@class NSSet, NSOrderedSet, NSString, NSMutableOrderedSet, NSObject;
@protocol OS_os_log;

@interface BSCompoundAssertion : NSObject <BSCompoundAssertionState, BSInvalidatable> {
    NSString *_identifierPrefix;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _syncLock;
    BOOL _syncLock_invalid;
    id /* block */ _syncLock_block;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    NSMutableOrderedSet *_dataLock_acquisitionRecords;
    NSObject<OS_os_log> *_dataLock_log;
}

@property (readonly) NSSet *reasons;
@property (readonly) NSOrderedSet *orderedReasons;
@property (retain) NSObject<OS_os_log> *log;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assertionWithIdentifier:(id)a0;
+ (id)assertionWithIdentifier:(id)a0 stateDidChangeHandler:(id /* block */)a1;
+ (id)new;

- (id)acquireForReason:(id)a0;
- (id)acquireForReason:(id)a0 withContext:(id)a1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
