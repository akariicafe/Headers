@class NSPersistentHistoryChange, NSArray, REMChangeTransaction, _REMNSPersistentHistoryChangeStorage;

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (readonly, weak) NSPersistentHistoryChange *persistentHistoryChange;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) BOOL isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (id)shortStringForChangeType:(long long)a0;
+ (BOOL)supportsSecureCoding;
+ (id)stringForChangeType:(long long)a0;

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)updatedProperties;
- (long long)changeType;
- (id)tombstone;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)changeID;
- (BOOL)isEqual:(id)a0;
- (id)changedObjectID;
- (id)initWithPersistentHistoryChange:(id)a0;
- (id)changedManagedObjectID;
- (void)resolveWithObjectID:(id)a0;
- (id)copyForCoalescing;
- (id)transaction;
- (void)encodeWithCoder:(id)a0;

@end
