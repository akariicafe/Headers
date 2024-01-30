@class MXCPUExceptionDiagnostic, MXDiskWriteExceptionDiagnostic;

@interface MXSpinTracerData : MXSourceData

@property (retain) MXCPUExceptionDiagnostic *cpuExceptionDiagnostic;
@property (retain) MXDiskWriteExceptionDiagnostic *diskWriteExceptionDiagnostic;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initPayloadDataWithDiagnostics:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
