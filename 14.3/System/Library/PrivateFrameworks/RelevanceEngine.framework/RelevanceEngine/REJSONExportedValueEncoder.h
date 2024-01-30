@interface REJSONExportedValueEncoder : REExportedValueEncoder

+ (id)_dateFormatter;

- (void)writeObjectStart:(id)a0 toStream:(id)a1;
- (void)writeObjectValuePairToStream:(id)a0 keyWriter:(id /* block */)a1 valueWriter:(id /* block */)a2 isLast:(BOOL)a3;
- (void)writeObjectEnd:(id)a0 toStream:(id)a1;
- (void)writeArrayStartToStream:(id)a0;
- (void)writeArrayValuePairToStream:(id)a0 valueWriter:(id /* block */)a1 isLast:(BOOL)a2;
- (void)writeArrayEndToStream:(id)a0;
- (BOOL)writesArrayHeader;
- (void)writeDictionaryStartToStream:(id)a0;
- (void)writeDictionaryValuePairToStream:(id)a0 keyWriter:(id /* block */)a1 valueWriter:(id /* block */)a2 isLast:(BOOL)a3;
- (void)writeDictionaryEndToStream:(id)a0;
- (BOOL)writesDictionaryHeader;
- (void)writeNumber:(id)a0 toStream:(id)a1;
- (void)writeString:(id)a0 toStream:(id)a1;
- (void)writeDate:(id)a0 toStream:(id)a1;
- (void)writeNullToStream:(id)a0;
- (void)_writeValueAsJSON:(id)a0 toStream:(id)a1;

@end
