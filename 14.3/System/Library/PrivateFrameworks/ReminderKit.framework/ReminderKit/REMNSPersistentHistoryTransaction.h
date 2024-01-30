@class _REMNSPersistentHistoryTransactionStorage;

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage;

+ (BOOL)supportsSecureCoding;

- (id)initWithStorage:(id)a0;
- (id)storeID;
- (id)accountID;
- (id)timestamp;
- (id)changes;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)_resolveAccountID:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)token;
- (id)author;
- (void)encodeWithCoder:(id)a0;

@end
