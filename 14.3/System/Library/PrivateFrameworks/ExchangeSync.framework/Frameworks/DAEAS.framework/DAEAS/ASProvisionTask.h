@class NSString, ASPolicy, NSDictionary;

@interface ASProvisionTask : ASTask

@property (nonatomic) int type;
@property (nonatomic) BOOL accountOnlyRemoteWipeSuccess;
@property (retain, nonatomic) ASPolicy *policy;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *deviceInfo;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)requestBody;
- (long long)taskStatusForExchangeStatus:(int)a0;
- (int)commandCode;
- (BOOL)getTopLevelToken:(char *)a0 outStatusCodePage:(char *)a1 outStatusToken:(char *)a2;
- (BOOL)processContext:(id)a0;
- (id)initWithOriginalKeyForPolicyRequest:(id)a0;
- (id)initWithPolicyAcknowledgement:(id)a0 withKey:(id)a1;
- (id)initWithRemoteWipeAcknowledgement:(id)a0 withKey:(id)a1;
- (id)initWithAccountOnlyRemoteWipeAcknowledgement:(id)a0 withKey:(id)a1 accountOnlyRemoteWipeSuccess:(BOOL)a2;
- (id)_initWithType:(int)a0 policy:(id)a1 key:(id)a2;
- (id)_initWithType:(int)a0 policy:(id)a1 key:(id)a2 accountOnlyRemoteWipeSuccess:(BOOL)a3;
- (id)_provisioningType;
- (id)_policyID;
- (BOOL)requiresEASVersionUpdate;

@end
