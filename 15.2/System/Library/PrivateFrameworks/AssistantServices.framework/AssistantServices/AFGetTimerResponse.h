@class STTimer;

@interface AFGetTimerResponse : AFSiriResponse

@property (retain, nonatomic) STTimer *timer;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
