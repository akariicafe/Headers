@class NSString;

@interface WFPaymentMethodParameter : WFDynamicEnumerationParameter <WFActionEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)parameterStateIsValid:(id)a0;
- (Class)singleStateClass;

@end
