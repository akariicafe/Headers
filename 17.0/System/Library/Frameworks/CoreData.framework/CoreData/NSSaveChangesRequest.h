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

- (BOOL)_secureOperation;
- (id)init;
- (void)dealloc;
- (void)_setSecureOperation:(BOOL)a0;
- (unsigned long long)requestType;
- (id)description;
- (id)initWithInsertedObjects:(id)a0 updatedObjects:(id)a1 deletedObjects:(id)a2 lockedObjects:(id)a3;

@end
