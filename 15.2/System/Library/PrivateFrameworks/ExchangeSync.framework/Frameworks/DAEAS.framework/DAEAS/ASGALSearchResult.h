@class NSString, NSDictionary, NSArray, NSData, NSMutableArray;

@interface ASGALSearchResult : ASItem

@property (retain, nonatomic) NSDictionary *applicationData;
@property (retain, nonatomic) NSMutableArray *mClasses;
@property (retain, nonatomic) NSMutableArray *mCollectionIDs;
@property (retain, nonatomic) NSString *longID;
@property (retain, nonatomic) NSArray *classes;
@property (retain, nonatomic) NSArray *collectionIDs;
@property (copy, nonatomic) NSString *phone;
@property (copy, nonatomic) NSString *office;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *company;
@property (copy, nonatomic) NSString *alias;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *homePhone;
@property (copy, nonatomic) NSString *mobilePhone;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSData *photoData;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)convertToDAContactSearchResultElement;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)postProcessApplicationData;
- (void)addClass:(id)a0;
- (void)addCollectionID:(id)a0;

@end
