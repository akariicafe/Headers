@class STTimer;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest {
    unsigned long long _action;
    STTimer *_timer;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)action;
- (id)timer;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithTimer:(id)a0 action:(unsigned long long)a1;

@end
