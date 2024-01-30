@class NSString;

@interface SKRExecutionOutput : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ executionRequestId;
    void /* unknown type, empty encoding */ resultCandidateId;
    void /* unknown type, empty encoding */ atoms;
    void /* unknown type, empty encoding */ command;
    void /* unknown type, empty encoding */ preCommandSubmissionContextUpdate;
    void /* unknown type, empty encoding */ postCommandSubmissionContextUpdate;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
