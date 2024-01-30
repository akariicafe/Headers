@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int suggestionType;

- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (id)feedbackKeyComponent;
- (BOOL)isEqualToATXInterruptionManagerTuningSuggestion:(id)a0;
- (id)initWithSuggestionType:(int)a0;

@end
