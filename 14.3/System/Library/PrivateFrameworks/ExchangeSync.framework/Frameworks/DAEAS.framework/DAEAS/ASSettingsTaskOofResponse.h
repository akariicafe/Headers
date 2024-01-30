@class NSNumber, ASSettingsTaskOofGetResponse;

@interface ASSettingsTaskOofResponse : ASItem

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) ASSettingsTaskOofGetResponse *oofGetResult;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)description;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
