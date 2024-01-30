@class NSDictionary, NSMapTable;
@protocol MTLJSONSerializing;

@interface MTLJSONAdapter : NSObject

@property (readonly, nonatomic) id<MTLJSONSerializing> model;
@property (readonly, nonatomic) Class modelClass;
@property (readonly, copy, nonatomic) NSDictionary *JSONKeyPathsByPropertyKey;
@property (readonly, copy, nonatomic) NSDictionary *valueTransformersByPropertyKey;
@property (readonly, nonatomic) NSMapTable *JSONAdaptersByModelClass;

+ (id)JSONDictionaryFromModel:(id)a0 error:(id *)a1;
+ (id)modelOfClass:(Class)a0 fromJSONDictionary:(id)a1 error:(id *)a2;
+ (id)JSONArrayFromModels:(id)a0;
+ (id)JSONDictionaryFromModel:(id)a0;
+ (id)NSURLJSONTransformer;
+ (id)arrayTransformerWithModelClass:(Class)a0;
+ (id)valueTransformersForModelClass:(Class)a0;
+ (id)JSONArrayFromModels:(id)a0 error:(id *)a1;
+ (id)NSUUIDJSONTransformer;
+ (id)dictionaryTransformerWithModelClass:(Class)a0;
+ (id)modelsOfClass:(Class)a0 fromJSONArray:(id)a1 error:(id *)a2;
+ (id)transformerForModelPropertiesOfClass:(Class)a0;
+ (id)transformerForModelPropertiesOfObjCType:(const char *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)JSONDictionaryFromModel:(id)a0 error:(id *)a1;
- (id)JSONAdapterForModelClass:(Class)a0 error:(id *)a1;
- (id)initWithModelClass:(Class)a0;
- (id)modelFromJSONDictionary:(id)a0 error:(id *)a1;
- (id)serializablePropertyKeys:(id)a0 forModel:(id)a1;

@end
