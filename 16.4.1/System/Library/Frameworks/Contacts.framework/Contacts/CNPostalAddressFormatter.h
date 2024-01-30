@class NSArray;

@interface CNPostalAddressFormatter : NSFormatter

@property (class, readonly) NSArray *supportedCountries;

@property (nonatomic) long long style;

+ (id)singleLineStringFromPostalAddress:(id)a0 addCountryName:(BOOL)a1;
+ (id)stringFromPostalAddress:(id)a0 style:(long long)a1;
+ (id)formatPropertyKeyForPostalAddressPropertyKey:(id)a0;
+ (id)localizedCountryNameForISOCountryCode:(id)a0;
+ (id)specificationForCountry:(id)a0;
+ (id)attributedStringFromPostalAddress:(id)a0 style:(long long)a1 withDefaultAttributes:(id)a2;
+ (id)localizedStringForPostalAddressString:(id)a0;
+ (id)postalAddressPropertyKeyForFormatPropertyKey:(id)a0;
+ (id)specificationWithAddressFormatPlist:(id)a0;

- (id)stringForObjectValue:(id)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (id)attributedStringFromPostalAddress:(id)a0 name:(id)a1 organization:(id)a2 attributes:(id)a3;
- (id)attributedStringFromPostalAddress:(id)a0 withDefaultAttributes:(id)a1;
- (id)postalAddressFromString:(id)a0;
- (id)stringFromPostalAddress:(id)a0;

@end
