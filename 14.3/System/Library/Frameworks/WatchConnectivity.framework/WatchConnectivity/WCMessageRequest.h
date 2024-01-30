@interface WCMessageRequest : WCMessage <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL expectsResponse;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPairingID:(id)a0 identifier:(id)a1 data:(id)a2 dictionaryMessage:(BOOL)a3 expectsResponse:(BOOL)a4;

@end
