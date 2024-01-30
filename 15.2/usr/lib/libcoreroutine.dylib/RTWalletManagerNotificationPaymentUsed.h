@class NSString, CLLocation, NSDate, NSNumber;

@interface RTWalletManagerNotificationPaymentUsed : RTNotification

@property (readonly, copy, nonatomic) NSString *passIdentifier;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSNumber *muid;
@property (readonly, nonatomic) NSNumber *provider;

- (void).cxx_destruct;
- (id)initWithPassIdentifier:(id)a0 transactionIdentifier:(id)a1 info:(id)a2;

@end
