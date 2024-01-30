@class NSString;

@interface HMIVideoAnalyzerResultOutcome : HMFObject <NSSecureCoding>

@property (class, readonly) HMIVideoAnalyzerResultOutcome *success;
@property (class, readonly) HMIVideoAnalyzerResultOutcome *skipped;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long code;
@property (readonly) BOOL isSkipped;
@property (readonly) BOOL isSuccess;
@property (readonly) NSString *message;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(unsigned long long)a0 message:(id)a1;

@end
