@interface STStopwatchShowAndPerformStopwatchAction : AFSiriRequest {
    unsigned long long _action;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)action;
- (id)_initWithAction:(unsigned long long)a0;

@end
