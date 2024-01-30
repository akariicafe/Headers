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

- (void)_setData:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)_policyForWAPProvisioningXMLData;
- (id)_wbxmlPolicyDict;
- (id)perDomainDictsForPolicy;

@end
