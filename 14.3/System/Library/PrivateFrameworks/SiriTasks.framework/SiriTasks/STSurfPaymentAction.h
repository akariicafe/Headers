@class INInteraction;

@interface STSurfPaymentAction : AFSiriRequest {
    INInteraction *_interaction;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)interaction;
- (id)initWithCoder:(id)a0;
- (unsigned long long)action;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithInteraction:(id)a0;

@end
