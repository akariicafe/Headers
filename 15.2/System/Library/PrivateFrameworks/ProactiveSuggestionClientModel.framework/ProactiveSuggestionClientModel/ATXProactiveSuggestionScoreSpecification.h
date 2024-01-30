@interface ATXProactiveSuggestionScoreSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double rawScore;
@property (nonatomic) long long suggestedConfidenceCategory;

+ (id)stringForSuggestedConfidenceCategory:(long long)a0;

- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRawScore:(double)a0 suggestedConfidenceCategory:(long long)a1;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fuzzyIsEqualToScoreSpecification:(id)a0;
- (unsigned long long)hash;
- (id)encodeAsProto;

@end
