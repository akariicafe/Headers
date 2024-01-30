@interface CNPostalAddressFormats : NSObject

+ (id)addressFormats;
+ (id)localizedStringForPostalAddressString:(id)a0 returningNilIfNotFound:(BOOL)a1;
+ (id)uncachedAddressFormats;

@end
