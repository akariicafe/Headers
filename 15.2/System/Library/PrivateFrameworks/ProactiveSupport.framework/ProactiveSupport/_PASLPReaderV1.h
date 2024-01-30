@class NSData;

@interface _PASLPReaderV1 : NSObject <_PASLPReaderProtocol> {
    NSData *_backingData;
    struct { void *mmapBase; unsigned long long mmapSize; } _mappedRegion;
    struct __CFAllocator { } *_releaseReaderDeallocator;
}

- (id)objectAtIndex:(unsigned long long)a0 usingArrayContext:(id)a1;
- (id)objectForKey:(id)a0 usingDictionaryContext:(id)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 sourcedFromPath:(id)a1 error:(id *)a2;
- (id)init;
- (id)keyAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (id)rootObjectWithErrMsg:(id *)a0;

@end
