@class NSString, NSArray, NSDate;

@interface PKPeerPaymentPendingRequestSummary : NSObject

@property (readonly, copy, nonatomic) NSString *requestToken;
@property (readonly, copy, nonatomic) NSString *status;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (readonly, copy, nonatomic) NSDate *expiryDate;

- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
