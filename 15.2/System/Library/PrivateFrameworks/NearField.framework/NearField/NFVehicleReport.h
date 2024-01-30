@class NSString, SESVehicleReport;

@interface NFVehicleReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SESVehicleReport *vehicleReport;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isRKEFunctionSupported:(id)a0;
- (id)initWithSESVehicleReport:(id)a0;
- (id)getSupportedRKEFunctions;
- (BOOL)isRKEFunctionInProgress:(id)a0;
- (id)getRKEFunctionsInProgress;
- (id)getStatusForRKEFunction:(id)a0;

@end
