@class NSString;
@protocol FCPaymentTransactionObserverDelegate;

@interface FCPaymentTransactionObserver : NSObject <SKPaymentTransactionObserver>

@property (weak, nonatomic) id<FCPaymentTransactionObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
