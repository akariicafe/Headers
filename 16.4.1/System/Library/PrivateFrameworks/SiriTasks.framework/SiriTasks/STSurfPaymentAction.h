@class INInteraction;

@interface STSurfPaymentAction : AFSiriRequest {
    INInteraction *_interaction;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)interaction;
- (unsigned long long)action;
- (void).cxx_destruct;
- (id)_initWithInteraction:(id)a0;

@end
