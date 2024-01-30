@class NSData;

@interface _PASLPReaderBinaryPlist : NSObject <_PASLPReaderProtocol> {
    NSData *_backingData;
    struct { void *mmapBase; unsigned long long mmapSize; } _mappedRegion;
    unsigned long long _topObjectRecord;
    unsigned long long _offsetsCount;
    unsigned char _offsetsSize;
    unsigned char _objectRefSize;
    const void *_offsets;
    struct __CFAllocator { } *_releaseReaderDeallocator;
}

- (id)objectAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (id)keyAtIndex:(unsigned long long)a0 usingDictionaryContext:(id)a1;
- (id)initWithData:(id)a0 sourcedFromPath:(id)a1 error:(id *)a2;
- (id)objectForKey:(id)a0 usingDictionaryContext:(id)a1;
- (void)dealloc;
- (id)init;
- (id)objectAtIndex:(unsigned long long)a0 usingArrayContext:(id)a1;
- (id)rootObjectWithErrMsg:(id *)a0;
- (void).cxx_destruct;

@end
