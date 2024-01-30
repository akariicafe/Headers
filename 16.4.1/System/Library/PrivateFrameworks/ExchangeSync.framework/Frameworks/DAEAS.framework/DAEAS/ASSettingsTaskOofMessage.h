@class NSNumber, NSString;

@interface ASSettingsTaskOofMessage : ASItem

@property (retain, nonatomic) NSNumber *audience;
@property (retain, nonatomic) NSNumber *enabled;
@property (retain, nonatomic) NSString *replyMessage;
@property (retain, nonatomic) NSString *bodyType;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)description;
- (void).cxx_destruct;
- (void)appliesToExternalKnown:(id)a0;
- (void)appliesToExternalUnknown:(id)a0;
- (void)appliesToInternal:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
