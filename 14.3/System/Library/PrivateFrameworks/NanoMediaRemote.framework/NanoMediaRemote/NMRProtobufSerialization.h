@class NSDictionary;

@interface NMRProtobufSerialization : NSObject {
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
}

@property (copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping;
@property (retain, nonatomic) Class protobufClass;
@property (copy, nonatomic) id /* block */ dictionaryValueToProtobufValueTransformer;
@property (copy, nonatomic) id /* block */ protobufValueToDictionaryValueTransformer;

- (void).cxx_destruct;
- (id)protobufFromDictionary:(id)a0;
- (id)dictionaryFromProtobuf:(id)a0;
- (id)protobufDataFromDictionary:(id)a0;
- (id)dictionaryFromProtobufData:(id)a0;

@end
