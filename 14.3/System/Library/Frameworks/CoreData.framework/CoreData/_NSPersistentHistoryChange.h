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

- (id)updatedProperties;
- (long long)changeType;
- (void)dealloc;
- (id)tombstone;
- (id)initWithCoder:(id)a0;
- (long long)changeID;
- (id)changedObjectID;
- (id)transaction;
- (void)encodeWithCoder:(id)a0;

@end
