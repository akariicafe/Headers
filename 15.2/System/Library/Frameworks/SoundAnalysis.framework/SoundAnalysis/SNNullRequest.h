@class NSString, SNNullDetector;

@interface SNNullRequest : NSObject <SNAnalyzerCreating, NSCopying, NSSecureCoding, SNRequest> {
    SNNullDetector *_detector;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double sampleRate;
@property (nonatomic) unsigned int blockSize;
@property (nonatomic) double computationalDutyCycle;
@property (nonatomic) BOOL graphIsDeadEnded;
@property (nonatomic) BOOL shouldThrowException;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createAnalyzerWithError:(id *)a0;
- (BOOL)isEqualToNullRequest:(id)a0;

@end
