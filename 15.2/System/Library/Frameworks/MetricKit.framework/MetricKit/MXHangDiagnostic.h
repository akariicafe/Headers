@class MXCallStackTree, NSMeasurement;

@interface MXHangDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSMeasurement *hangDuration;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 callStack:(id)a2 hangDuration:(id)a3;

@end
