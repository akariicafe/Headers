@interface TRHandshakeResponse : TRResponseMessage

@property (nonatomic) long long protocolVersion;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
