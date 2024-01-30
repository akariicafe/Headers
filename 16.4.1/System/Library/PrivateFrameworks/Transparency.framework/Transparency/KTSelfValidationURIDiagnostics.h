@class NSDictionary, NSString, NSDate;

@interface KTSelfValidationURIDiagnostics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *ktVerificationInfoDiagnosticsJson;
@property (retain) NSDictionary *transparentDataDiagnosticsJson;
@property (retain) NSString *result;
@property (readonly) NSDictionary *diagnosticsJsonDictionary;
@property (retain) NSString *errorDescription;
@property (retain) NSDate *requestTime;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
