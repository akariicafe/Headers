@class NSString;

@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest

@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, copy, nonatomic) NSString *bundleID;

- (id)initWithPropertyName:(id)a0 bundleID:(id)a1;
- (void).cxx_destruct;
- (void)startRequestWithCompletion:(id /* block */)a0;
- (unsigned long long)fetchEligibilityWithError:(id *)a0;

@end
