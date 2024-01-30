@class NSSet, NSNotification;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    unsigned long long _flags;
    NSNotification *_mutatedObjectIDsNotification;
}

@property (readonly) NSSet *insertedObjects;
@property (readonly) NSSet *updatedObjects;
@property (readonly) NSSet *deletedObjects;
@property (readonly) NSSet *lockedObjects;

+ (void)initialize;

- (BOOL)_secureOperation;
- (unsigned long long)requestType;
- (void)_setSecureOperation:(BOOL)a0;
- (id)init;
- (id)initWithInsertedObjects:(id)a0 updatedObjects:(id)a1 deletedObjects:(id)a2 lockedObjects:(id)a3;
- (char)_retryHandlerCount;
- (void)dealloc;
- (void)_setChangedObjectIDsNotification:(id)a0;
- (void)_setRetryHandlerCount:(char)a0;
- (id)description;
- (BOOL)hasChanges;
- (void)setDeletedObjects:(id)a0;
- (id)_changedObjectIDsNotification;

@end
