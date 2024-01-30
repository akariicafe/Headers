@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {
    NSString *_data;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)data;
- (void)_setData:(id)a0;
- (id)_policyForWAPProvisioningXMLData;
- (id)_wbxmlPolicyDict;
- (id)perDomainDictsForPolicy;

@end
