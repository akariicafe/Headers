@class NSDate, NSString, NSArray, WFAirQualityProviderAttribution, NSURL, NSLocale, WFAirPollutant, WFAQIScale, WFLocation, WFAQIScaleCategory;

@interface WFAirQualityConditions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) WFLocation *location;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) BOOL temporarilyUnavailable;
@property (copy, nonatomic) NSString *provider;
@property (retain, nonatomic) WFAirQualityProviderAttribution *providerAttribution;
@property (retain, nonatomic) NSArray *pollutants;
@property (retain, nonatomic) WFAirPollutant *primaryPollutant;
@property (nonatomic) unsigned long long airQualityIndex;
@property (nonatomic) unsigned long long significance;
@property (copy, nonatomic) NSURL *learnMoreURL;
@property (nonatomic) unsigned long long currentCategoryIndex;
@property (retain, nonatomic) WFAQIScaleCategory *currentScaleCategory;
@property (copy, nonatomic) NSString *scaleIdentifier;
@property (retain, nonatomic) WFAQIScale *scale;
@property (copy, nonatomic) NSString *localizedRecommendation;
@property (copy, nonatomic) NSString *localizedDisclaimer;
@property (nonatomic) unsigned long long category;
@property (copy, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSString *localizedAirQualityCategory;
@property (copy, nonatomic) NSString *airQualityScale;
@property (nonatomic) unsigned long long localizedAirQualityIndex;
@property (retain, nonatomic) WFAQIScaleCategory *localizedAirQualityScaleCategory;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
