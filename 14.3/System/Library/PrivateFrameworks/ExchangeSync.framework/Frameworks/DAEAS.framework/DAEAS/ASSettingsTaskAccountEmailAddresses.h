@class NSString, NSMutableSet;

@interface ASSettingsTaskAccountEmailAddresses : ASItem

@property (retain, nonatomic) NSMutableSet *mEmailAddresses;
@property (retain, nonatomic) NSString *primarySMTPAddress;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)emailAddresses;
- (id)description;
- (void)addEmailAddress:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
