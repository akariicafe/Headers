@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)storeID;
- (id)author;
- (id)initWithStorage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)timestamp;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)accountID;
- (id)initWithCoder:(id)a0;
- (id)changes;
- (id)token;
- (void)_resolveAccountID:(id)a0;

@end
