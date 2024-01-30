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

- (void)_setType:(id)a0;
- (void)_setKey:(id)a0;
- (int)status;
- (void)_setStatus:(id)a0;
- (id)key;
- (id)description;
- (void).cxx_destruct;
- (id)type;
- (id)perDomainDictsForPolicy;

@end
