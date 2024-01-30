@interface REExportedValueEncoder : NSObject {
    unsigned long long _options;
}

- (id)initWithOptions:(unsigned long long)a0;
- (void)_writeValue:(id)a0 toStream:(id)a1 depth:(unsigned long long)a2 needsIndent:(BOOL)a3;
- (void)writeExportedValue:(id)a0 toStream:(id)a1;
- (void)writeObjectStart:(id)a0 toStream:(id)a1;
- (void)writeObjectValuePairToStream:(id)a0 keyWriter:(id /* block */)a1 valueWriter:(id /* block */)a2 isLast:(BOOL)a3;
- (void)writeObjectEnd:(id)a0 toStream:(id)a1;
- (void)_writeCollection:(id)a0 toStream:(id)a1 startBlock:(id /* block */)a2 writerBlock:(id /* block */)a3 endBlock:(id /* block */)a4 wantsHeader:(BOOL)a5 depth:(unsigned long long)a6;
- (void)writeArrayStartToStream:(id)a0;
- (void)writeArrayValuePairToStream:(id)a0 valueWriter:(id /* block */)a1 isLast:(BOOL)a2;
- (void)writeArrayEndToStream:(id)a0;
- (BOOL)writesArrayHeader;
- (void)writeDictionaryStartToStream:(id)a0;
- (void)writeDictionaryValuePairToStream:(id)a0 keyWriter:(id /* block */)a1 valueWriter:(id /* block */)a2 isLast:(BOOL)a3;
- (void)writeDictionaryEndToStream:(id)a0;
- (BOOL)writesDictionaryHeader;
- (void)writeUnsupportedObject:(id)a0 toStream:(id)a1;
- (void)writeNumber:(id)a0 toStream:(id)a1;
- (void)writeString:(id)a0 toStream:(id)a1;
- (void)writeDate:(id)a0 toStream:(id)a1;
- (void)writeNullToStream:(id)a0;
- (id)dataFromExportedValue:(id)a0;
- (id)_namesArrayFromArray:(id)a0;

@end
