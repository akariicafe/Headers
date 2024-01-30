@class NSArray;

@interface CNVCardLine21SerializationStrategy : CNVCardLineSerializationStrategyImpl {
    NSArray *_encodings;
}

+ (id)serializerWithStorage:(id)a0 encodings:(id)a1;

- (void)serializeString:(id)a0;
- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (void)serializeData:(id)a0;
- (void)serializeParameters:(id)a0;
- (void)_addAutomagicParametersForData:(id)a0;
- (id)detectedTypeOfData:(id)a0;
- (id)initWithStorage:(id)a0 encodings:(id)a1;
- (id)necessaryEncodingForValue:(id)a0;
- (void)serializeArray:(id)a0 withItemSeparator:(id)a1;
- (void)serializeGroupedLines:(id)a0 withGroupingName:(id)a1;
- (void)serializeVersionPlaceholder;

@end
