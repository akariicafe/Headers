@class STContactAddress;

@interface STCall : STSiriModelObject {
    long long _service;
    STContactAddress *_initiatorAddress;
    STContactAddress *_recipientAddress;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (long long)service;
- (void)setService:(long long)a0;
- (id)_aceContextObjectValue;
- (void)setRecipientAddress:(id)a0;
- (id)initiatorAddress;
- (void)setInitiatorAddress:(id)a0;
- (id)recipientAddress;
- (void)encodeWithCoder:(id)a0;

@end
