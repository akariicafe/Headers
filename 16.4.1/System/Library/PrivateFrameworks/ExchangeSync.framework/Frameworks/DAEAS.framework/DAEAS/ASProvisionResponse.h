@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {
    NSArray *_policies;
    NSNumber *_status;
    BOOL _remoteWipe;
    BOOL _accountOnlyRemoteWipe;
    NSString *_policyType;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (id)policies;
- (void)_setStatus:(id)a0;
- (id)initWithPolicyType:(id)a0;
- (id)init;
- (id)description;
- (id)status;
- (void).cxx_destruct;
- (id)policyType;
- (void)setPolicyType:(id)a0;
- (void)_setRemoteWipe:(id)a0;
- (void)_setAccountOnlyRemoteWipe:(id)a0;
- (void)_setPolicies:(id)a0;
- (BOOL)accountOnlyRemoteWipe;
- (id)asParseRules;
- (BOOL)remoteWipe;

@end
