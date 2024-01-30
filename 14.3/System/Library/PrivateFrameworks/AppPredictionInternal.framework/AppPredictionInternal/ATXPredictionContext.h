@class ATXPredictionDeviceStateContext, NSString, ATXPredictionLocationMotionContext, ATXPredictionTimeContext, ATXPredictionAmbientLightContext, ATXPredictionUserContext;

@interface ATXPredictionContext : NSObject <BMStoreData, ATXProtoBufWrapper, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXPredictionDeviceStateContext *deviceStateContext;
@property (retain, nonatomic) ATXPredictionTimeContext *timeContext;
@property (retain, nonatomic) ATXPredictionLocationMotionContext *locationMotionContext;
@property (retain, nonatomic) ATXPredictionAmbientLightContext *ambientLightContext;
@property (retain, nonatomic) ATXPredictionUserContext *userContext;
@property (readonly, nonatomic) BOOL isOverridden;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)serialize;
- (id)jsonDict;
- (void).cxx_destruct;
- (id)initWithDeviceStateContext:(id)a0 timeContext:(id)a1 locationMotionContext:(id)a2 ambientLightContext:(id)a3 userContext:(id)a4;
- (id)json;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceStateContext:(id)a0 timeContext:(id)a1 locationMotionContext:(id)a2 ambientLightContext:(id)a3 userContext:(id)a4 isOverridden:(BOOL)a5;
- (BOOL)isEqualToATXPredictionContext:(id)a0;
- (void)updateWithInjectedContext:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
