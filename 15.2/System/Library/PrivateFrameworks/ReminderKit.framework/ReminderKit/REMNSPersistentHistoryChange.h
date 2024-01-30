@class NSPersistentHistoryChange, NSArray, REMChangeTransaction, _REMNSPersistentHistoryChangeStorage;

@interface REMNSPersistentHistoryChange : REMChangeObject

@property (retain) _REMNSPersistentHistoryChangeStorage *storage;
@property (readonly, weak) NSPersistentHistoryChange *persistentHistoryChange;
@property (weak, nonatomic) REMChangeTransaction *internal_ChangeTransaction;
@property (nonatomic) BOOL isCoalesced;
@property (retain, nonatomic) NSArray *coalescedChanges;

+ (BOOL)supportsSecureCoding;
+ (id)stringForChangeType:(long long)a0;
+ (id)shortStringForChangeType:(long long)a0;

- (id)transaction;
- (id)initWithStorage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)changeID;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)changeType;
- (id)initWithCoder:(id)a0;
- (id)updatedProperties;
- (id)changedObjectID;
- (id)tombstone;
- (id)initWithPersistentHistoryChange:(id)a0;
- (id)changedManagedObjectID;
- (void)resolveWithObjectID:(id)a0;
- (id)copyForCoalescing;

@end
