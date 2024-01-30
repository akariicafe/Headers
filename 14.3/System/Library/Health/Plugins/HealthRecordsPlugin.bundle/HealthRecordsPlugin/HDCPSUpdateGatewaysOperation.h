@class NSString, NSArray, NSError;

@interface HDCPSUpdateGatewaysOperation : HDCPSOperation

@property (readonly, copy, nonatomic) NSString *batchID;
@property (readonly, copy, nonatomic) NSArray *externalIDs;
@property (readonly, copy, nonatomic) NSArray *gateways;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)main;
- (id)debugDescription;
- (id)initWithManager:(id)a0 profile:(id)a1 batchID:(id)a2 externalIDs:(id)a3;
- (id)initWithManager:(id)a0 profile:(id)a1;
- (void)_failWithError:(id)a0 step:(id)a1;

@end
