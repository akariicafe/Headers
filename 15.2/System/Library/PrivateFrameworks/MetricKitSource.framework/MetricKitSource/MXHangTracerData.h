@class MXHangDiagnostic;

@interface MXHangTracerData : MXSourceData

@property (retain) MXHangDiagnostic *hangDiagnostic;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initPayloadDataWithDiagnostics:(id)a0;

@end
