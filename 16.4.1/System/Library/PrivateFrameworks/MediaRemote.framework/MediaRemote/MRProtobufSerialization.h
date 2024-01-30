@class NSDictionary;

@interface MRProtobufSerialization : NSObject {
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
}

@property (copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping;
@property (retain, nonatomic) Class protobufClass;
@property (copy, nonatomic) id /* block */ dictionaryValueToProtobufValueTransformer;
@property (copy, nonatomic) id /* block */ protobufValueToDictionaryValueTransformer;

- (void).cxx_destruct;
- (id)createDictionaryFromProtobuf:(id)a0;
- (id)createProtobufFromDictionary:(id)a0;

@end
