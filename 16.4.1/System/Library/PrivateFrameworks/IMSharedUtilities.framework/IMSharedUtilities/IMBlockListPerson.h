@class NSString, CNContact;

@interface IMBlockListPerson : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *cachedFullName;
@property (retain, nonatomic) NSString *cachedCompanyName;
@property (readonly, nonatomic) CNContact *cnPerson;
@property (readonly, nonatomic) NSString *fullName;

+ (id)personWithCNContact:(id)a0;

- (id)sanitizeString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)companyName;
- (id)initWithCNContact:(id)a0;
- (BOOL)isInAddressBook;
- (BOOL)isEqualToPerson:(id)a0;

@end
