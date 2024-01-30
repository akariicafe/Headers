@class NSArray, NSDictionary, NSString;

@interface SESVehicleReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *supportedFunctions;
@property (retain, nonatomic) NSArray *functionsInProgress;
@property (retain, nonatomic) NSDictionary *status;
@property (readonly, nonatomic) NSString *keyIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isRKEFunctionSupported:(id)a0;
- (id)getSupportedRKEFunctions;
- (BOOL)isRKEFunctionInProgress:(id)a0;
- (id)getRKEFunctionsInProgress;
- (id)getStatusForRKEFunction:(id)a0;
- (id)initWithKeyIdentifier:(id)a0 supportedFunctions:(id)a1 functionsInProgress:(id)a2 status:(id)a3;

@end
