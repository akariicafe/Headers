@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tuningSuggestionType;
@property (readonly, nonatomic) int suggestionType;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRawData;
- (BOOL)isEqual:(id)a0;
- (id)initWithSuggestionType:(long long)a0;
- (id)feedbackKeyComponent;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)isEqualToATXInterruptionManagerTuningSuggestion:(id)a0;

@end
