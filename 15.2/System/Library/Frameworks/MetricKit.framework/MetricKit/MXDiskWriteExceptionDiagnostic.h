@class MXCallStackTree, NSMeasurement;

@interface MXDiskWriteExceptionDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *totalWritesCaused;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 totalWritesCaused:(id)a2 stackTrace:(id)a3;

@end
