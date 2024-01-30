@class NSString;

@interface HMIVideoAnalyzerResultOutcome : HMFObject <NSSecureCoding>

@property (class, readonly) HMIVideoAnalyzerResultOutcome *success;
@property (class, readonly) HMIVideoAnalyzerResultOutcome *skipped;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long code;
@property (readonly) BOOL isSkipped;
@property (readonly) BOOL isSuccess;
@property (readonly) NSString *message;
@property (readonly) double analysisFPS;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCode:(unsigned long long)a0 analysisFPS:(double)a1 message:(id)a2;

@end
