@class NSString, NSURL;

@interface CardDAVAddressBookContainer : CoreDAVContainer

@property (retain, nonatomic) NSString *maxResourceSize;
@property (retain, nonatomic) NSString *maxImageSize;
@property (retain, nonatomic) NSURL *meCardURL;
@property (nonatomic) BOOL isGuardianRestricted;
@property (readonly, nonatomic) BOOL isAddressBook;
@property (readonly, nonatomic) BOOL isSharedAddressBook;
@property (readonly, nonatomic) BOOL isSearchAddressBook;

+ (id)copyPropertyMappingsForParser;

- (void)applyParsedProperties:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
