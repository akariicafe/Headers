@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl {
    unsigned long long _startingLineLength;
}

- (void)serializeData:(id)a0;
- (void)serializeString:(id)a0;
- (void)serializeArray:(id)a0 withItemSeparator:(id)a1;
- (void)serializeVersionPlaceholder;
- (void)willSerializeValue;
- (void)serializeGroupingName:(id)a0;
- (void)serializeParameters:(id)a0;
- (void)serializeGroupedLines:(id)a0 withGroupingName:(id)a1;
- (void)_addAutomagicParametersForData:(id)a0;
- (id)detectedTypeOfData:(id)a0;

@end
