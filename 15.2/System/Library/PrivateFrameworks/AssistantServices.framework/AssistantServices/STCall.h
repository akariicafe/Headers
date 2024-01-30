@class STContactAddress;

@interface STCall : STSiriModelObject {
    long long _service;
    STContactAddress *_initiatorAddress;
    STContactAddress *_recipientAddress;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)_aceContextObjectValue;
- (id)description;
- (long long)service;
- (void).cxx_destruct;
- (id)initiatorAddress;
- (void)setInitiatorAddress:(id)a0;
- (void)setService:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setRecipientAddress:(id)a0;
- (id)recipientAddress;

@end
