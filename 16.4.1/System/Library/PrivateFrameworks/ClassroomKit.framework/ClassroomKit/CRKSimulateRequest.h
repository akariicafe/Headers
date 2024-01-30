@class CRKIDSLocalSimulationConfiguration;

@interface CRKSimulateRequest : CATTaskRequest

@property (retain, nonatomic) CRKIDSLocalSimulationConfiguration *IDSLocalConfiguration;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
