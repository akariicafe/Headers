@class NSString, NSArray, NSMutableArray;

@interface PKWebServiceRequest : NSObject <NSSecureCoding> {
    NSMutableArray *_diagnosticReasonsList;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *boundInterfaceIdentifier;
@property (readonly, nonatomic) NSArray *diagnosticReasons;

+ (id)_HTTPBodyWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_murlRequestWithURL:(id)a0;
- (id)_murlRequestWithServiceURL:(id)a0 endpointComponents:(id)a1 queryParameters:(id)a2 appleAccountInformation:(id)a3;
- (id)_murlRequestWithURL:(id)a0 appleAccountInformation:(id)a1;
- (void)addDiagnosticReason:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
