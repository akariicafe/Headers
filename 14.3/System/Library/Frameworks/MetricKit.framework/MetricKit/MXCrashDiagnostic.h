@class NSString, MXCallStackTree, NSNumber;

@interface MXCrashDiagnostic : MXDiagnostic

@property (readonly) MXCallStackTree *callStackTree;
@property (readonly) NSString *terminationReason;
@property (readonly) NSString *virtualMemoryRegionInfo;
@property (readonly) NSNumber *exceptionType;
@property (readonly) NSNumber *exceptionCode;
@property (readonly) NSNumber *signal;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMetaData:(id)a0 applicationVersion:(id)a1 terminationReason:(id)a2 applicationSpecificInfo:(id)a3 virtualMemoryRegionInfo:(id)a4 exceptionType:(id)a5 exceptionCode:(id)a6 signal:(id)a7 stackTrace:(id)a8;
- (void)encodeWithCoder:(id)a0;

@end
