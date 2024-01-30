@class NSString;

@interface PKPaymentCardViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)presentCell:(id)a0 withDataItem:(id)a1 shouldShowSeperator:(BOOL)a2 forPaymentRequest:(id)a3 cellProvider:(id /* block */)a4;
+ (id)_billingValueInCell:(id)a0 forItem:(id)a1 type:(unsigned long long)a2;


@end
