@class NSArray, NSString, REMNSPersistentHistoryToken, NSDate, REMObjectID;

@interface _REMNSPersistentHistoryTransactionStorage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSArray *changes;
@property (nonatomic) long long transactionNumber;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *processID;
@property (copy, nonatomic) NSString *contextName;
@property (copy, nonatomic) NSString *author;
@property (retain, nonatomic) REMNSPersistentHistoryToken *token;
@property (copy, nonatomic) REMObjectID *accountID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
