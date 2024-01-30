@class NSError, NSString, NSArray, WFIntentExecutor, CLPlacemark, NSObject, NSMutableArray, WFRideOptionParameter, WFPaymentMethodParameter;
@protocol OS_dispatch_queue, WFRideOptionsLoaderDelegate;

@interface WFRideOptionsLoader : NSObject <WFDynamicEnumerationDataSource, WFActionEventObserver>

@property (copy, nonatomic) NSArray *rideOptions;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (retain, nonatomic) NSError *loadingOptionsError;
@property (nonatomic) unsigned long long loadingState;
@property (retain, nonatomic) WFIntentExecutor *executor;
@property (readonly, nonatomic) NSMutableArray *completionBlocks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadingOptionsQueue;
@property (copy, nonatomic) CLPlacemark *pickupLocation;
@property (copy, nonatomic) CLPlacemark *dropOffLocation;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (weak, nonatomic) id<WFRideOptionsLoaderDelegate> delegate;
@property (retain, nonatomic) WFRideOptionParameter *rideOptionParameterParameter;
@property (retain, nonatomic) WFPaymentMethodParameter *paymentMethodParameterParameter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadRideOptionsValueWithCompletion:(id /* block */)a0;

@end
