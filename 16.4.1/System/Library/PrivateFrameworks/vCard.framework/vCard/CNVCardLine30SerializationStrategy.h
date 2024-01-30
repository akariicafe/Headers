@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl {
    unsigned long long _startingLineLength;
}

- (void)serializeString:(id)a0;
- (void)serializeData:(id)a0;
- (void)serializeParameters:(id)a0;
- (void)_addAutomagicParametersForData:(id)a0;
- (id)detectedTypeOfData:(id)a0;
- (void)serializeArray:(id)a0 withItemSeparator:(id)a1;
- (void)serializeGroupedLines:(id)a0 withGroupingName:(id)a1;
- (void)serializeGroupingName:(id)a0;
- (void)serializeVersionPlaceholder;
- (void)willSerializeValue;

@end
