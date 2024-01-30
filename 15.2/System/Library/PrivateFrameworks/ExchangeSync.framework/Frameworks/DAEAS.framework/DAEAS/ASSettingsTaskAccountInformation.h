@class NSString, ASSettingsTaskAccountEmailAddresses;

@interface ASSettingsTaskAccountInformation : ASItem

@property (retain, nonatomic) ASSettingsTaskAccountEmailAddresses *emailAddressList;
@property (retain, nonatomic) NSString *accountId;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (id)description;
- (void).cxx_destruct;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
