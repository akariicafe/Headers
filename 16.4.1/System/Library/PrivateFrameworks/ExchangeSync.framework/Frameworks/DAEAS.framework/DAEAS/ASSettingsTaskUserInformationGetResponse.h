@class NSArray, NSString;

@interface ASSettingsTaskUserInformationGetResponse : ASItem

@property (retain, nonatomic) NSArray *accounts;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSString *primarySMTPAddress;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (void).cxx_destruct;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
