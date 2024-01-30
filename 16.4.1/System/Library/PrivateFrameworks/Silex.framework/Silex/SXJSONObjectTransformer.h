@class NSString;

@interface SXJSONObjectTransformer : NSObject <SXJSONObjectTransforming>

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)concatenatingTransformerWithKey:(id)a0;
+ (id)mergingTransformerWithKey:(id)a0;
+ (id)transformerWithKey:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)transformKey:(id)a0;
- (id)transformObject:(id)a0 otherObject:(id)a1;

@end
