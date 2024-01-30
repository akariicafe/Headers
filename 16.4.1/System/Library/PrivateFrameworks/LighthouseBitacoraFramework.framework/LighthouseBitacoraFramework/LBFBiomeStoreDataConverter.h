@interface LBFBiomeStoreDataConverter : NSObject

+ (id)createLighthousePluginEvent:(id)a0 identifiers:(id)a1 timestamp:(id)a2;
+ (id)createMLRuntimedEvent:(id)a0 identifiers:(id)a1 timestamp:(id)a2;
+ (id)createTrialIdentifiers:(id)a0;
+ (id)createTrialdEvent:(id)a0 identifiers:(id)a1 timestamp:(id)a2;
+ (id)protoFromBiomeLighthousePluginEvent:(id)a0;
+ (id)protoFromBiomeMlruntimedEvent:(id)a0;
+ (id)protoFromBiomeTrialdEvent:(id)a0;
+ (id)protoFromTrialIdentifier:(id)a0;
+ (id)serializeBitacoraStateToJson:(id)a0;

@end
