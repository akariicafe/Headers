@class NSSet, NSMutableArray;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {
    NSSet *_insertedObjects;
    NSSet *_updatedObjects;
    NSSet *_deletedObjects;
    NSSet *_optimisticallyLockedObjects;
    unsigned long long _flags;
    NSMutableArray *_mutatedObjectIDsNotifications;
}

@property (readonly) NSSet *insertedObjects;
@property (readonly) NSSet *updatedObjects;
@property (readonly) NSSet *deletedObjects;
@property (readonly) NSSet *lockedObjects;

+ (void)initialize;

- (void)_setSecureOperation:(BOOL)a0;
- (unsigned long long)requestType;
- (id)description;
- (BOOL)_secureOperation;
- (id)init;
- (id)initWithInsertedObjects:(id)a0 updatedObjects:(id)a1 deletedObjects:(id)a2 lockedObjects:(id)a3;
- (void)dealloc;

@end
