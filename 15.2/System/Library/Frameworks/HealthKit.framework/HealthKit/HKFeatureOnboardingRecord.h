@class NSSet, HKOnboardingCompletion, HKFeatureSettings, NSArray, NSDictionary;

@interface HKFeatureOnboardingRecord : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKFeatureSettings *featureSettings;
@property (readonly, copy, nonatomic) HKOnboardingCompletion *onboardingCompletion;
@property (readonly, nonatomic) long long onboardingState;
@property (readonly, copy, nonatomic) NSSet *onboardedCountryCodesForOnboardingState;
@property (readonly, copy, nonatomic) NSSet *allOnboardedCountryCodesRegardlessOfSupportedState;
@property (readonly, copy, nonatomic) NSArray *allOnboardingCompletionsRegardlessOfSupportedState;
@property (readonly, copy, nonatomic) NSDictionary *onboardingCompletionsByState;

- (id)initWithOnboardingState:(long long)a0 onboardingCompletionsByState:(id)a1 featureSettings:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithOnboardingState:(long long)a0 onboardingCompletion:(id)a1 featureSettings:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
