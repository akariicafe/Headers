@interface PFCameraMetadataSerialization : NSObject

+ (id)deserializedMetadataFromData:(id)a0 error:(id *)a1;
+ (id)serializedDataFromClientMetadata:(id)a0 error:(id *)a1;
+ (id)deserializedMetadataFromPrivateClientMetadata:(id)a0 error:(id *)a1;

@end
