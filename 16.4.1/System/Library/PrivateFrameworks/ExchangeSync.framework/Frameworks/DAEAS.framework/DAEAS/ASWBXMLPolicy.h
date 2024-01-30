@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
    NSMutableDictionary *_policyData;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void).cxx_destruct;
- (void)_setPolicyData:(id)a0;
- (void)_cleanUpPolicyData:(id)a0;
- (id)perDomainDictsForPolicy;

@end
