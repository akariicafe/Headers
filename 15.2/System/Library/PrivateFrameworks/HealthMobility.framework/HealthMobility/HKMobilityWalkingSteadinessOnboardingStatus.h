@class NSDate;

@interface HKMobilityWalkingSteadinessOnboardingStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long onboardingUnavailableReasons;
@property (readonly, copy, nonatomic) NSDate *dateOnboarded;
@property (readonly, nonatomic) BOOL shouldAdvertiseOnboarding;
@property (readonly, nonatomic) BOOL isLocaleValidOnLocalDevice;
@property (readonly, nonatomic) BOOL isClassificationAvailable;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithState:(long long)a0 unavailableReasons:(long long)a1 dateOnboarded:(id)a2 shouldOnboardingTileBeAdvertised:(BOOL)a3 isLocaleValidOnLocalDevice:(BOOL)a4 isClassificationAvailable:(BOOL)a5;

@end
