@interface WCMessageRequest : WCMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL expectsResponse;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithPairingID:(id)a0 identifier:(id)a1 data:(id)a2 dictionaryMessage:(BOOL)a3 expectsResponse:(BOOL)a4;

@end
