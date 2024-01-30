@class NSString, HKCountrySet;

@interface HKAllowedCountries : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *prettyPrintedDescription;
@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly, nonatomic) long long remoteState;
@property (readonly, copy, nonatomic) HKCountrySet *remoteCountrySet;

+ (id)noRemoteDevice:(id)a0;
+ (id)allowedCountriesInIntersectionOfLocalAndRemoteSetPendingSync:(id)a0;
+ (id)allowedCountriesInIntersectionOfLocalSet:(id)a0 remoteSet:(id)a1;
+ (id)allowedCountriesInLocalSet:(id)a0;
+ (id)capabilityNotSupportedOnRemoteDevice:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)ineligibilityReasonsForOnboardingCountryCode:(id)a0;
- (void).cxx_destruct;

@end
