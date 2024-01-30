@class NSString;

@interface PKPaymentShippingMethodViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_valueForItem:(id)a0;
+ (void)presentCell:(id)a0 withDataItem:(id)a1 shouldShowSeperator:(BOOL)a2 forPaymentRequest:(id)a3 cellProvider:(id /* block */)a4;


@end
