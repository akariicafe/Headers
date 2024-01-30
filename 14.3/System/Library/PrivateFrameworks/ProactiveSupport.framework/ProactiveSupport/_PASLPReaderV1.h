@class NSData;

@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol> {
    NSData *_backingData;
    struct { void *mmapBase; unsigned long long mmapSize; } _mappedRegion;
    struct __CFAllocator { } *_releaseReaderDeallocator;
}

- (BOOL)_validateHeader:(const struct _PASLPHeader { char x0[3]; unsigned char x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a0 filename:(id)a1 error:(id *)a2;
- (BOOL)_decodeValue:(struct { unsigned int x0; unsigned int x1; })a0 handleBoolean:(id /* block */)a1 handleTaggedInt:(id /* block */)a2 handleBoxedInt:(id /* block */)a3 handleTaggedFloat:(id /* block */)a4 handleBoxedFloat:(id /* block */)a5 handleDate:(id /* block */)a6 handleData:(id /* block */)a7 handleString:(id /* block */)a8 handleDict:(id /* block */)a9 handleArray:(id /* block */)a10 errMsg:(id *)a11;
- (BOOL)_validateObjectGraphWithFilename:(id)a0 stats:(struct _PASLPObjectGraphStats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; } *)a1 error:(id *)a2;
- (unsigned int)_mmapByteOffsetForPtr:(const void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_stringForMappedUTF8CString:(const char *)a0;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (BOOL)_decodeDictionaryKeyValue:(struct { unsigned int x0; unsigned int x1; })a0 handleString:(id /* block */)a1 errMsg:(id *)a2;
- (id)objectForKey:(id)a0 usingDictionaryContext:(id)a1;
- (id)_objectForValue:(struct { unsigned int x0; unsigned int x1; })a0 errMsg:(id *)a1;
- (id)initWithData:(id)a0 sourcedFromPath:(id)a1 error:(id *)a2;
- (id)_objectForValue:(struct { unsigned int x0; unsigned int x1; })a0;
- (id)rootObjectWithErrMsg:(id *)a0;
- (BOOL)_validateStringTableWithFilename:(id)a0 stats:(struct _PASLPObjectGraphStats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; } *)a1 error:(id *)a2;
- (id)objectAtIndex:(unsigned long long)a0 usingArrayContext:(id)a1;
- (id)keyAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (void)decodeDictionaryKeyForValue:(struct { unsigned int x0; unsigned int x1; })a0 handleString:(id /* block */)a1;
- (BOOL)_validateObjectGraphWithFilename:(id)a0 rootValue:(struct { unsigned int x0; unsigned int x1; })a1 recursionDepth:(unsigned long long)a2 stats:(struct _PASLPObjectGraphStats { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; } *)a3 error:(id *)a4;

@end
