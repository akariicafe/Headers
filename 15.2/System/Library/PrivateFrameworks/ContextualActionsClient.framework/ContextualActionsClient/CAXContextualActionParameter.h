@class NSString, NSDictionary;

@interface CAXContextualActionParameter : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *parameterType;
@property (readonly, nonatomic) NSDictionary *parameterMetadata;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)initWithParameterType:(id)a0 parameterMetadata:(id)a1;

@end
