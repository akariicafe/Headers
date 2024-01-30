@interface ICASOnboardingScreenType : NSObject <AADataType>

@property (readonly, nonatomic) long long onboardingScreenType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithOnboardingScreenType:(long long)a0;

@end
