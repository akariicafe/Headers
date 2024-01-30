@interface CNPostalAddressFormats : NSObject

+ (id)uncachedAddressFormats;
+ (id)localizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(BOOL)a1;
+ (id)addressFormats;

@end
