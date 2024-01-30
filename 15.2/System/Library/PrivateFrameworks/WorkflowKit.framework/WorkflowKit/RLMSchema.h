@class NSArray, NSMutableDictionary;

@interface RLMSchema : NSObject <NSCopying> {
    NSArray *_objectSchema;
    struct Schema { struct ObjectSchema *__begin_; struct ObjectSchema *__end_; struct __compressed_pair<realm::ObjectSchema *, std::allocator<realm::ObjectSchema>> { struct ObjectSchema *__value_; } __end_cap_; } _objectStoreSchema;
}

@property (retain, nonatomic) NSMutableDictionary *objectSchemaByName;
@property (copy, nonatomic) NSArray *objectSchema;

+ (id)partialPrivateSharedSchema;
+ (id)sharedSchemaForClass:(Class)a0;
+ (id)sharedSchema;
+ (Class)classForString:(id)a0;
+ (id)dynamicSchemaFromObjectStoreSchema:(const void *)a0;
+ (id)schemaWithObjectClasses:(id)a0;
+ (id)partialSharedSchema;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)schemaForClassName:(id)a0;
- (struct Schema { struct ObjectSchema *x0; struct ObjectSchema *x1; struct __compressed_pair<realm::ObjectSchema *, std::allocator<realm::ObjectSchema>> { struct ObjectSchema *x0; } x2; })objectStoreCopy;
- (BOOL)isEqualToSchema:(id)a0;

@end
