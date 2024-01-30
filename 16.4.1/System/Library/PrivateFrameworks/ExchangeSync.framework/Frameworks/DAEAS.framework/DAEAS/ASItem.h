@class NSMutableDictionary, NSObject;
@protocol ASParsing;

@interface ASItem : NSObject <ASParsing> {
    id /* block */ _currentStreamBlock;
}

@property (weak, nonatomic) ASItem *root;
@property (weak, nonatomic) ASItem *parent;
@property (nonatomic) int codePage;
@property (nonatomic) int token;
@property (retain, nonatomic) NSObject<ASParsing> *currentlyParsingSubItem;
@property (nonatomic) int currentlyParsingCPTNumber;
@property (copy, nonatomic) id /* block */ currentStreamBlock;
@property (nonatomic) int parsingState;
@property (retain, nonatomic) NSMutableDictionary *parseRuleUsageNumbers;

+ (id)parseRuleCache;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)init;
- (void).cxx_destruct;
- (long long)_dataclass;
- (id /* block */)_copyStreamingBlockForStreamingCallbackDict:(id)a0 dccpt:(int)a1;
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)a0 curToken:(unsigned char)a1;
- (BOOL)_itemPathMatches:(id)a0;
- (BOOL)_itemPathWithDCCPTMatches:(id)a0 dccpt:(int)a1;
- (BOOL)_parseNextValueWithDataclass:(long long)a0 context:(id)a1 root:(id)a2 parent:(id)a3 callbackDict:(id)a4 streamCallbackDict:(id)a5 parseRules:(id)a6 account:(id)a7;
- (id)_replacementObjectWithCallbackDict:(id)a0;
- (void)_setCurrentlyParsingSubItem:(id)a0;
- (BOOL)_setupFirstParseWithContext:(id)a0 root:(id)a1 parent:(id)a2;
- (BOOL)_streamIfNecessaryFromContext:(id)a0;
- (int)_streamYourLittleHeartOutWithContext:(id)a0;
- (id)asParseRules;
- (void)ignoreThisContent:(id)a0;
- (BOOL)nextParsedObjectWithContext:(id)a0 root:(id)a1 callbackDict:(id)a2 streamCallbackDict:(id)a3 dataclass:(long long)a4 outParsedObject:(id *)a5 outCPTNumber:(int *)a6 account:(id)a7;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;

@end
