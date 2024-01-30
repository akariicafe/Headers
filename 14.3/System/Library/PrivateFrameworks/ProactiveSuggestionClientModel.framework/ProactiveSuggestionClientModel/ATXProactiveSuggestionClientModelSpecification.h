@class NSString;

@interface ATXProactiveSuggestionClientModelSpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) NSString *clientModelVersion;
@property (readonly, nonatomic) unsigned long long engagementResetPolicy;

- (id)jsonRawData;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithClientModelId:(id)a0 clientModelVersion:(id)a1 engagementResetPolicy:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)fuzzyIsEqualToClientModelSpecification:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithClientModelId:(id)a0 clientModelVersion:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
