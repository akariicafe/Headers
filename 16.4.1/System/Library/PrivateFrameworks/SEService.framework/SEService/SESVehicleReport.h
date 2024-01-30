@class NSArray, NSDictionary, NSString;

@interface SESVehicleReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *supportedFunctions;
@property (retain, nonatomic) NSArray *functionsInProgress;
@property (retain, nonatomic) NSDictionary *status;
@property (retain, nonatomic) NSDictionary *proprietaryData;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSString *readerIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)getRKEFunctionsInProgress;
- (id)getStatusForRKEFunction:(id)a0;
- (id)getSupportedRKEFunctions;
- (BOOL)isRKEFunctionInProgress:(id)a0;
- (BOOL)isRKEFunctionSupported:(id)a0;
- (id)getProprietaryDataForRKEFunction:(id)a0;
- (id)initWithKeyIdentifier:(id)a0 readerIdentifier:(id)a1 supportedFunctions:(id)a2 functionsInProgress:(id)a3 status:(id)a4 proprietaryData:(id)a5;

@end
