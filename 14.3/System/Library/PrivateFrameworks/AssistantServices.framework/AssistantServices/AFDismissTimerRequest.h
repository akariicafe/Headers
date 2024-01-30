@class NSArray;

@interface AFDismissTimerRequest : AFSiriRequest

@property (copy, nonatomic) NSArray *timerURLs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)createResponse;
- (void)encodeWithCoder:(id)a0;

@end
