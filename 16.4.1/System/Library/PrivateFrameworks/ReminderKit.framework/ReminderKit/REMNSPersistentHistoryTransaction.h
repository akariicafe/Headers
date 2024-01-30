@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)changes;
- (id)token;
- (id)accountID;
- (id)initWithCoder:(id)a0;
- (id)storeID;
- (BOOL)isEqual:(id)a0;
- (id)initWithStorage:(id)a0;
- (id)timestamp;
- (id)description;
- (id)author;
- (void).cxx_destruct;
- (void)_resolveAccountID:(id)a0;

@end
