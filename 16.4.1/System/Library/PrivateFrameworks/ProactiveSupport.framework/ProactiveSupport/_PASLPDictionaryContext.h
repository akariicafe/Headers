@class NSCache;

@interface _PASLPDictionaryContext : NSObject {
    const unsigned int *_storage;
    unsigned long long _count;
}

@property (weak, nonatomic) NSCache *enumerationCache;

- (id)initWithStorage:(const unsigned int *)a0 count:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
