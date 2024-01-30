@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent

@property (readonly, nonatomic) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)eventType;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)a0 unread:(BOOL)a1;
- (BOOL)isEqualToActivityEvent:(id)a0;

@end
