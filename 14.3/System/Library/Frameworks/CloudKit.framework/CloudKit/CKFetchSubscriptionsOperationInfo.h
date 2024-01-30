@class NSArray;

@interface CKFetchSubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *subscriptionIDs;
@property (nonatomic) BOOL isFetchAllSubscriptionsOperation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
