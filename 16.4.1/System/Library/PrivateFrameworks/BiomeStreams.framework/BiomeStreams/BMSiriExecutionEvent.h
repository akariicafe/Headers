@class NSString;

@interface BMSiriExecutionEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (readonly, copy, nonatomic) NSString *taskId;
@property (readonly, nonatomic) unsigned long long taskStep;
@property (readonly, copy, nonatomic) NSString *statusReason;
@property (readonly, copy, nonatomic) NSString *slotValue;
@property (readonly, copy, nonatomic) NSString *intentName;
@property (readonly, copy, nonatomic) NSString *appBundleId;
@property (readonly, copy, nonatomic) NSString *interactionId;
@property (readonly, nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithTaskID:(id)a0 taskStep:(unsigned long long)a1 statusReason:(id)a2 slotValue:(id)a3 intentName:(id)a4;
- (id)initWithTaskID:(id)a0 taskStep:(unsigned long long)a1 statusReason:(id)a2 slotValue:(id)a3 intentName:(id)a4 appBundleId:(id)a5 interactionId:(id)a6;
- (id)initWithTaskID:(id)a0 taskStep:(unsigned long long)a1 statusReason:(id)a2 slotValue:(id)a3 intentName:(id)a4 appBundleId:(id)a5 interactionId:(id)a6 absoluteTimestamp:(double)a7;

@end
