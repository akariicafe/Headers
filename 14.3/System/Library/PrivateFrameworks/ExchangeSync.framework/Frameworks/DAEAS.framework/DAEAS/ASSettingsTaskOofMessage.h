@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage : ASItem

@property (retain, nonatomic) NSNumber *audience;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSString *replyMessage;
@property (retain, nonatomic) NSString *bodyType;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)description;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)appliesToInternal:(id)a0;
- (void)appliesToExternalKnown:(id)a0;
- (void)appliesToExternalUnknown:(id)a0;

@end
