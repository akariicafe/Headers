@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent

@property (readonly, nonatomic) PKPaymentTransaction *transaction;

- (id)eventType;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)a0 unread:(BOOL)a1;
- (BOOL)isEqualToActivityEvent:(id)a0;

@end
