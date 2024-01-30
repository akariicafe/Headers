@class NSString;

@interface ASPolicy : ASItem {
    NSString *_type;
    NSString *_key;
    NSString *_status;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void)_setKey:(id)a0;
- (void).cxx_destruct;
- (void)_setStatus:(id)a0;
- (id)description;
- (id)type;
- (id)key;
- (void)_setType:(id)a0;
- (int)status;
- (id)perDomainDictsForPolicy;

@end
