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
+ (BOOL)isCoreSpotlightResult;
+ (id)nextUpcomingDateForDateComponents:(id)a0 fromDate:(id)a1;
+ (id)dialRequestURLWithPhoneNumber:(id)a0 contact:(id)a1;
+ (id)valueWithTitle:(id)a0 copyString:(id)a1 command:(id)a2 previewSymbolName:(id)a3;
+ (id)infoTupleWithKeyTitle:(id)a0 values:(id)a1;
+ (id)punchoutCommandWithScheme:(id)a0 path:(id)a1 queryItems:(id)a2;
+ (id)nextUpcomingDateForDateComponents:(id)a0;

- (id)initWithContact:(id)a0;
- (id)initWithResult:(id)a0;
- (id)initWithContactEntity:(id)a0;
- (void).cxx_destruct;
- (id)buildDetailedRowCardSection;
- (id)buildThumbnail;
- (id)buildCompactCardSection;
- (id)buildCommand;
- (id)buildResult;
- (id)buildTitle;
- (id)infoTupleForPhoneNumbers;
- (id)rowsForKey:(id)a0 withValues:(id)a1 symbolName:(id)a2 commandForString:(id /* block */)a3;
- (id)buildHeaderResultForEntity;
- (id)buildFooterResultForEntity;
- (id)buildSocialMediaResultForEntity;
- (id)buildAction;

@end
