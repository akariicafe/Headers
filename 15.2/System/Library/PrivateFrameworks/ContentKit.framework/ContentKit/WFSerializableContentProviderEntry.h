@interface WFSerializableContentProviderEntry : NSObject

@property (readonly, nonatomic) id /* block */ serializationBlock;
@property (readonly, nonatomic) id /* block */ deserializationBlock;

- (void).cxx_destruct;
- (id)initWithSerializedRepresentationBlock:(id /* block */)a0 deserializationBlock:(id /* block */)a1;

@end
