@class NFVehicleReport, NSString, NSArray;

@interface STSVehicleReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NFVehicleReport *vehicleReport;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) BOOL supportsSecureRanging;
@property (readonly, nonatomic) NSArray *supportedFunctions;
@property (readonly, nonatomic) NSArray *functionsInProgress;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)getStatusForFunction:(id)a0;
- (id)initVehicleReport:(id)a0;
- (BOOL)isFunctionInProgress:(id)a0;
- (BOOL)isFunctionSupported:(id)a0;

@end
