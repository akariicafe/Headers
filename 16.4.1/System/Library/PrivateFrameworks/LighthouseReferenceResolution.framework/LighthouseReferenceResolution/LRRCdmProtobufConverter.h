@interface LRRCdmProtobufConverter : NSObject

+ (id)deserializeNluResponseFromJson:(id)a0;
+ (id)deserializeMDRequestFromJson:(id)a0;
+ (id)deserializeMDResponseFromJson:(id)a0;
+ (id)deserializeMRRequestFromJson:(id)a0;
+ (id)deserializeMRResponseFromJson:(id)a0;
+ (id)deserializeNluRequestFromJson:(id)a0;
+ (id)deserializeUsoGraphFromJson:(id)a0;
+ (id)serializeNluRequestToJson:(id)a0;
+ (id)serializeUsoGraphToJson:(id)a0;

@end
