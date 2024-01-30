@class NSData;

@interface VMUSimpleDeserializer : VMUAbstractSerializer {
    void *_cache;
    NSData *_data;
}

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (void)dealloc;
- (unsigned int)deserialize32WithError:(id *)a0;
- (unsigned long long)deserialize64WithError:(id *)a0;
- (id)copyDeserializedStringWithError:(id *)a0;
- (id)copyDeserializedStringWithID:(unsigned int)a0 error:(id *)a1;
- (void)skipFields:(unsigned int)a0;
- (const char *)copyDeserializedNullTerminatedBytesWithError:(id *)a0;
- (unsigned int *)_deserializeValues:(unsigned int)a0 error:(id *)a1;

@end
