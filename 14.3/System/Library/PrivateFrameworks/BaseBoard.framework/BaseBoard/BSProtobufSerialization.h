@interface BSProtobufSerialization : NSObject

+ (id)encodeObject:(id)a0 error:(id *)a1;
+ (id)buildSchemaForClass:(Class)a0 builder:(id /* block */)a1;
+ (id)decodeObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;

@end
