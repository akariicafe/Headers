@class NSManagedObjectID, NSSet, NSDictionary, NSPersistentHistoryTransaction, NSFetchRequest, NSEntityDescription;

@interface NSPersistentHistoryChange : NSObject <NSCopying>

@property (class, readonly) NSEntityDescription *entityDescription;
@property (class, readonly) NSFetchRequest *fetchRequest;

@property (readonly) long long changeID;
@property (readonly, copy) NSManagedObjectID *changedObjectID;
@property (readonly) long long changeType;
@property (readonly, copy) NSDictionary *tombstone;
@property (readonly) NSPersistentHistoryTransaction *transaction;
@property (readonly, copy) NSSet *updatedProperties;

+ (id)entityDescriptionWithContext:(id)a0;
+ (id)stringForChangeType:(long long)a0;
+ (id)shortStringForChangeType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
