@class NSString;

@interface FAEligiblityEvaluationRequest : FAFamilyCircleRequest

@property (readonly, copy, nonatomic) NSString *propertyName;
@property (readonly, copy, nonatomic) NSString *bundleID;

- (void).cxx_destruct;
- (id)initWithPropertyName:(id)a0 bundleID:(id)a1;
- (void)startRequestWithCompletion:(id /* block */)a0;
- (unsigned long long)fetchEligibilityWithError:(id *)a0;

@end
