@class NSSQLEntity, NSDictionary, NSData, NSPersistentHistoryTransaction, NSManagedObjectID;

@interface _NSPersistentHistoryChange : NSPersistentHistoryChange <NSSecureCoding> {
    long long _changeID;
    NSManagedObjectID *_changedObjectID;
    long long _changeType;
    NSDictionary *_tombstone;
    NSPersistentHistoryTransaction *_transaction;
    NSData *_columns;
    NSSQLEntity *_sqlEntity;
    NSManagedObjectID *_backingObjectID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)_setTransaction:(id)a0;
- (id)transaction;
- (long long)changeType;
- (id)_backingObjectID;
- (id)initWithCoder:(id)a0;
- (long long)changeID;
- (void)dealloc;
- (id)updatedProperties;
- (id)tombstone;
- (id)initWithDictionary:(id)a0 andChangeObjectID:(id)a1;
- (id)changedObjectID;

@end
