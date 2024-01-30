@class NSString, NSObject;
@protocol NSSecureCoding, ATXProtoBufWrapper;

@interface ATXUIEvent : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) NSObject<NSSecureCoding, ATXProtoBufWrapper> *event;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)uiEventWithHomeScreenEvent:(id)a0;
+ (id)uiEventWithSpotlightEvent:(id)a0;
+ (id)uiEventWithAppDirectoryEvent:(id)a0;

- (id)serialize;
- (id)jsonDict;
- (id)init;
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
- (id)initWithConsumerSubType:(unsigned char)a0 event:(id)a1;
- (id)_jsonDictForATXHomeScreenEvent:(id)a0;
- (id)_jsonDictForATXSpotlightEvent:(id)a0;
- (id)_jsonDictForATXAppDirectoryEvent:(id)a0;
- (BOOL)isEqualToATXUIEvent:(id)a0;
- (id)homeScreenEvent;
- (id)spotlightEvent;
- (id)appDirectoryEvent;

@end
