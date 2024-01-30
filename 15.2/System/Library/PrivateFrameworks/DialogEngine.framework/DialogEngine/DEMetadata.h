@interface DEMetadata : NSObject

@property const void *Obj;

+ (id)schemaInput:(id)a0 typeName:(id)a1 inputName:(id)a2;

- (id)init;
- (id)sampleValues:(id)a0 locale:(id)a1;
- (id)initWithObj:(const void *)a0;
- (id)sampleValues:(id)a0;

@end
