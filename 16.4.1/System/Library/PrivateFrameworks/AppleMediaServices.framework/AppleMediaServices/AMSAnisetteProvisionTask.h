@class NSData, ACAccount;
@protocol AMSBagProtocol;

@interface AMSAnisetteProvisionTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)_createFinishProvisioningRequestWithClientData:(id)a0 error:(id *)a1;
- (BOOL)_processFinishProvisioningResult:(id)a0 sessionID:(unsigned int)a1 error:(id *)a2;
- (id)_startProvisioningWithOutputSessionID:(unsigned int *)a0 error:(id *)a1;
- (id)initWithData:(id)a0 type:(long long)a1 account:(id)a2 bag:(id)a3;
- (id)performProvisioning;

@end
