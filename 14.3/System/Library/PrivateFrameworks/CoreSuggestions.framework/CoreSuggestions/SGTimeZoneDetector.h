@class NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGTimeZoneDetector : NSObject {
    NSDictionary *_countryCodeForCountryName;
    NSDictionary *_timeZoneForCountryCode;
    NSDictionary *_timeZoneForCountryCodeDictionarySupplement;
    NSDictionary *_regionAbbreviations;
    NSDictionary *_timeZoneForPostalCode;
    NSDictionary *_timeZoneAbbreviations;
    NSDictionary *_uniquePostalCodeFormats;
    NSDictionary *_postalCodeFormats;
    BOOL _keepData;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

+ (id)_normalizedString:(id)a0;
+ (id)_regularExpressionForPostalCodeFormat:(id)a0;
+ (id)_normalizedCountryString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_handleMemoryPressureStatus;
- (id)countryCodeForAddress:(id)a0;
- (id)timeZoneNameForAddress:(id)a0 withCountryCode:(id)a1;
- (void)cleanupCache;
- (id)_getRegionNames;
- (id)_getCountryCodeForCountryName;
- (id)_getTimeZoneForCountryCode;
- (void)_readPlistRegionAbbreviationsData;
- (id)_getRegionAbbreviations;
- (id)_getTimeZoneForCountryCodeDictionarySupplement;
- (id)_getTimeZoneForPostalCode;
- (id)_getTimeZoneAbbreviations;
- (id)_getUniquePostalCodeFormats;
- (id)_getPostalCodeFormats;
- (id)_postalCodeForAddress:(id)a0 withCountryCode:(id)a1;
- (id)_countryCodeByRegionAbbreviationFromNormalizedAddress:(id)a0;
- (id)_countryCodeByRegularExpressionFromNormalizedAddress:(id)a0;
- (id)_countryCodeByRegionNameFromNormalizedAddress:(id)a0 withWords:(id)a1;
- (id)_countryCodeByCountryNameFromNormalizedAddressWords:(id)a0;
- (id)_timeZoneNameForPostalCode:(id)a0 withPostalCodeTable:(id)a1;

@end
