@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {
    NSArray *_policies;
    NSNumber *_status;
    BOOL _remoteWipe;
    BOOL _accountOnlyRemoteWipe;
    NSString *_policyType;
}

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPolicyType:(id)a0;
- (void)_setStatus:(id)a0;
- (id)description;
- (id)status;
- (id)policyType;
- (id)policies;
- (id)asParseRules;
- (void)_setPolicies:(id)a0;
- (void)_setRemoteWipe:(id)a0;
- (void)_setAccountOnlyRemoteWipe:(id)a0;
- (void)setPolicyType:(id)a0;
- (BOOL)remoteWipe;
- (BOOL)accountOnlyRemoteWipe;

@end
