@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long lastSupportedMessageType;

- (BOOL)isSupported:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLastSupportedMessageType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
