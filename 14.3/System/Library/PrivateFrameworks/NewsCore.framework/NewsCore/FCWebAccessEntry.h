@class NSString, NSDate;

@interface FCWebAccessEntry : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *tagID;
@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *purchaseReceipt;
@property (copy, nonatomic) NSDate *lastRetryAttemptTime;

- (void).cxx_destruct;
- (id)initWithEntryID:(id)a0 dictionaryRepresentation:(id)a1;
- (id)initWithEntryID:(id)a0 tagID:(id)a1 purchaseID:(id)a2 lastRetryAttemptTime:(id)a3 email:(id)a4 purchaseReceipt:(id)a5;
- (id)dictionaryRepresentation;

@end
