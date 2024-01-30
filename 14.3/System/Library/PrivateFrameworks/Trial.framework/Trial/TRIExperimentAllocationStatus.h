@class NSString, NSArray;

@interface TRIExperimentAllocationStatus : TRIAllocationStatus

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSArray *namespaces;

- (BOOL)isEqualToStatus:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned char)a0 date:(id)a1 experimentId:(id)a2 deploymentId:(int)a3 treatmentId:(id)a4 namespaces:(id)a5;
- (id)initWithType:(unsigned char)a0 date:(id)a1 experimentId:(id)a2 deploymentId:(int)a3 treatmentId:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
