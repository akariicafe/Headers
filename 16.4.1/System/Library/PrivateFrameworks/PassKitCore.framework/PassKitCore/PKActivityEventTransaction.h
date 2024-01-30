@class PKPaymentTransaction;

@interface PKActivityEventTransaction : PKActivityEvent

@property (readonly, nonatomic) PKPaymentTransaction *transaction;

- (unsigned long long)hash;
- (id)eventType;
- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0 unread:(BOOL)a1;
- (BOOL)isEqualToActivityEvent:(id)a0;

@end
