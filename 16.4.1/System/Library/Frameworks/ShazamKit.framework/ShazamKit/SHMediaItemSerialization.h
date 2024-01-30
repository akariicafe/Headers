@interface SHMediaItemSerialization : NSObject

+ (id)dateFormatter;
+ (id)propertiesFromSerializationFormat:(id)a0 error:(id *)a1;
+ (id)serializationFormatForProperties:(id)a0 error:(id *)a1;
+ (id)transformProperties:(id)a0 toSerializationFormat:(BOOL)a1 error:(id *)a2;
+ (id)transformValue:(id)a0 forProperty:(id)a1 toSerializationFormat:(BOOL)a2 error:(id *)a3;

@end
