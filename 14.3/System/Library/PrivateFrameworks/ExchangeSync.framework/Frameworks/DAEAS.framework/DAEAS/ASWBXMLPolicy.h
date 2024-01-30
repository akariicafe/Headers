@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
    NSMutableDictionary *_policyData;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)perDomainDictsForPolicy;
- (void)_setPolicyData:(id)a0;
- (void)_cleanUpPolicyData:(id)a0;

@end
