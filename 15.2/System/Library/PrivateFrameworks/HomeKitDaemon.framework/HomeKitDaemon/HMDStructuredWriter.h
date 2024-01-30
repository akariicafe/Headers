@class NSError;

@interface HMDStructuredWriter : HMDStructuredDataStream {
    NSError *_error;
}

+ (id)writerIntoObject:(id *)a0 extendedTypeOptions:(unsigned long long)a1;
+ (id)extendedTypeWriterWithWriter:(id)a0 options:(unsigned long long)a1;
+ (id)writerIntoObject:(id *)a0;

- (void)writeData:(id)a0;
- (void)endArray;
- (void)writeString:(id)a0;
- (void).cxx_destruct;
- (void)endDictionary;
- (id)error;
- (void)failWithError:(id)a0;
- (void)beginArrayOfSize:(unsigned long long)a0;
- (void)beginDictionaryOfSize:(unsigned long long)a0;
- (void)writeDictionaryKey:(id)a0;
- (void)writeNull;
- (void)writeBoolean:(BOOL)a0;
- (void)writeNumber:(id)a0;
- (void)writeDate:(id)a0;
- (void)writeUUID:(id)a0;
- (void)writeLogicalValue:(id)a0;
- (void)writeToken:(struct _HMDStructuredDataToken { long long x0; id x1; })a0;

@end
