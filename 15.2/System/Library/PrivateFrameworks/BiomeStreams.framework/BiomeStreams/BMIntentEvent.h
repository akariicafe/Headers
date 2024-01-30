@class NSString, NSData;

@interface BMIntentEvent : BMEventBase <BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMIdentifiable, BMPublicStreamEvent>

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
@property (nonatomic) BOOL donatedBySiri;
@property (nonatomic) long long interactionDirection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, nonatomic) NSString *identifier;

+ (long long)stream;
+ (id)eventWithDKEvent:(id)a0;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithAbsoluteTime:(double)a0 bundleId:(id)a1 sourceId:(id)a2 intentClass:(id)a3 intentVerb:(id)a4 intentType:(long long)a5 intentHandlingStatus:(long long)a6 interaction:(id)a7 itemID:(id)a8 donatedBySiri:(BOOL)a9 interactionDirection:(long long)a10;
- (id)initWithAbsoluteTime:(double)a0 bundleId:(id)a1 sourceId:(id)a2 intentClass:(id)a3 intentVerb:(id)a4 intentType:(long long)a5 intentHandlingStatus:(long long)a6 interaction:(id)a7 itemID:(id)a8;
- (BOOL)checkAndReportDecodingFailureIfNeededForCFAbsoluteTime:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithAbsoluteTime:(double)a0 bundleId:(id)a1 sourceId:(id)a2 intentClass:(id)a3 intentVerb:(id)a4 intentType:(long long)a5 intentHandlingStatus:(long long)a6 interaction:(id)a7;

@end
