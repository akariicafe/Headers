@interface RELogExportedValueEncoder : REExportedValueEncoder

+ (id)_dateFormatter;

- (void)writeObjectStart:(id)a0 toStream:(id)a1;
- (void)writeObjectValuePairToStream:(id)a0 keyWriter:(id /* block */)a1 valueWriter:(id /* block */)a2 isLast:(BOOL)a3;
- (void)writeArrayValuePairToStream:(id)a0 valueWriter:(id /* block */)a1 isLast:(BOOL)a2;
- (void)writeDictionaryValuePairToStream:(id)a0 keyWriter:(id /* block */)a1 valueWriter:(id /* block */)a2 isLast:(BOOL)a3;
- (void)writeNumber:(id)a0 toStream:(id)a1;
- (void)writeString:(id)a0 toStream:(id)a1;
- (void)writeDate:(id)a0 toStream:(id)a1;
- (void)writeNullToStream:(id)a0;

@end
