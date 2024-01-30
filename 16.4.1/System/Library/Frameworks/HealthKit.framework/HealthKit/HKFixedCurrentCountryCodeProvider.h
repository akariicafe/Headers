@class NSString;

@interface HKFixedCurrentCountryCodeProvider : NSObject <HKCurrentCountryCodeProvider> {
    NSString *_countryCode;
}

- (id)currentCountryCode;
- (id)initWithCountryCode:(id)a0;
- (void).cxx_destruct;

@end
