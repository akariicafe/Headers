@interface LBFProtoConverter : NSObject

+ (id)createBitacoraBmltIdentifiers:(id)a0;
+ (id)createBitacoraExperimentIdentifiers:(id)a0;
+ (id)createLighthousePluginEventStatus:(id)a0;
+ (id)createLighthousePluginProto:(id)a0;
+ (id)createLighthousePluginProtoData:(id)a0;
+ (id)createMLRuntimeProto:(id)a0;
+ (id)createMLRuntimeProtoData:(id)a0;
+ (id)createMLRuntimeScheduleStatus:(id)a0;
+ (id)createMLRuntimeTaskEvent:(id)a0;
+ (id)createTrialIdentifiers:(id)a0;
+ (id)createTrialdProto:(id)a0;
+ (id)createTrialdProtoData:(id)a0;
+ (id)deserializeLighthousePluginProto:(id)a0;
+ (id)deserializeMLRuntimeProto:(id)a0;
+ (id)deserializeTrialdProto:(id)a0;
+ (id)serializeBitacoraStateToJson:(id)a0;
+ (id)serializeLighthousePluginProtoToJson:(id)a0;
+ (id)serializeMLRuntimeProtoToJson:(id)a0;
+ (id)serializeTrialdProtoToJson:(id)a0;

@end
