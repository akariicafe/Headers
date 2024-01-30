@class NSArray, CNContact, NSString, NSDateComponents;

@interface SSContactResultBuilder : SSResultBuilder {
    int _type;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *phoneNumbers;
@property (retain, nonatomic) NSArray *addresses;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSArray *rawPhoneNumbers;
@property (retain, nonatomic) NSArray *alternateNames;
@property (retain, nonatomic) NSDateComponents *birthdayComponents;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (retain, nonatomic) NSString *personQueryIdentifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL scopesSearchOnEngagement;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (id)infoTupleWithKeyTitle:(id)a0 values:(id)a1;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (id)initWithContactEntity:(id)a0;
- (id)buildSocialMediaResultForEntity;
- (id)buildAction;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildDetailedRowCardSection;
- (id)buildFooterResultForEntity;
- (id)buildHeaderResultForEntity;
- (id)buildResult;
- (id)buildThumbnail;
- (id)buildTitle;
- (id)infoTupleForPhoneNumbers;
- (id)rowsForKey:(id)a0 withValues:(id)a1 commandButtonItemForString:(id /* block */)a2;

@end
