@class INInteraction;

@interface STSurfPaymentAction : AFSiriRequest {
    INInteraction *_interaction;
}

+ (BOOL)supportsSecureCoding;

- (id)interaction;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned long long)action;
- (id)_initWithInteraction:(id)a0;

@end
