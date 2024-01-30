@class NSArray, NSString;

@interface TUContactsDataProviderResult : NSObject

@property (copy, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *companyName;
@property (copy, nonatomic) NSString *contactLabel;
@property (nonatomic) int legacyAddressBookIdentifier;

- (id)description;
- (void).cxx_destruct;

@end
