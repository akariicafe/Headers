@interface ATXSendMessagesToDigestSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRawData;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)description;
- (BOOL)isEqualToATXSendMessagesToDigestSuggestion:(id)a0;

@end
