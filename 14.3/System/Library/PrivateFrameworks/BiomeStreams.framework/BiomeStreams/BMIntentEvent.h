@class NSString, NSData;

@interface BMIntentEvent : BMEventBase <BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double absoluteTimestamp;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *sourceId;
@property (copy, nonatomic) NSString *intentClass;
@property (copy, nonatomic) NSString *intentVerb;
@property (nonatomic) long long intentType;
@property (nonatomic) long long intentHandlingStatus;
@property (copy, nonatomic) NSData *interaction;
@property (copy, nonatomic) NSString *itemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;

+ (id)eventWithDKEvent:(id)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)jsonDict;
- (void).cxx_destruct;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithAbsoluteTime:(double)a0 bundleId:(id)a1 sourceId:(id)a2 intentClass:(id)a3 intentVerb:(id)a4 intentType:(long long)a5 intentHandlingStatus:(long long)a6 interaction:(id)a7 itemID:(id)a8;
- (BOOL)checkAndReportDecodingFailureIfNeededForCFAbsoluteTime:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithAbsoluteTime:(double)a0 bundleId:(id)a1 sourceId:(id)a2 intentClass:(id)a3 intentVerb:(id)a4 intentType:(long long)a5 intentHandlingStatus:(long long)a6 interaction:(id)a7;

@end
