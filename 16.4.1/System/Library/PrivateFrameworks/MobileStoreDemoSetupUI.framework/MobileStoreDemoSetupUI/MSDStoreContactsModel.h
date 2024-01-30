@class NSDictionary, NSMutableDictionary;

@interface MSDStoreContactsModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *countryCodeToNumbers;
@property (readonly, nonatomic) NSDictionary *regionToCountryCode;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)contactNumberForCountryCode:(id)a0;

@end
