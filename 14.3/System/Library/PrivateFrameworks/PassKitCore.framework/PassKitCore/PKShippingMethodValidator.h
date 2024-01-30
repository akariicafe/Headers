@class NSString;

@interface PKShippingMethodValidator : PKPaymentSummaryItemValidator <PKPaymentValidating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)validatorWithObject:(id)a0;
+ (Class)validatedClass;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithShippingMethod:(id)a0;
- (BOOL)isValidWithAPIType:(unsigned long long)a0 withError:(id *)a1;

@end
