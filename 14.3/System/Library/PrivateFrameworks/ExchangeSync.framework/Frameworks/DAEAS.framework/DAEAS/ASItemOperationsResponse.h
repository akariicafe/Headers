@class NSNumber, NSArray;

@interface ASItemOperationsResponse : ASItem {
    NSNumber *_status;
    NSArray *_fetchResponses;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (void)setStatus:(id)a0;
- (id)description;
- (id)status;
- (id)fetchResponses;
- (void)setFetchResponses:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
