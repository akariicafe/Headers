@class NSNumber, NSArray;

@interface ASItemOperationsResponse : ASItem {
    NSNumber *_status;
    NSArray *_fetchResponses;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)setStatus:(id)a0;
- (id)description;
- (id)status;
- (void).cxx_destruct;
- (id)fetchResponses;
- (void)setFetchResponses:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
