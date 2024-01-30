@interface STStopwatchShowAndPerformStopwatchAction : AFSiriRequest {
    unsigned long long _action;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)action;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithAction:(unsigned long long)a0;

@end
