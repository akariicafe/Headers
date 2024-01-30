@class NSCache;

@interface _PASLPDictionaryContext : NSObject

@property (readonly) const unsigned int *storage;
@property (readonly) unsigned long long count;
@property (weak) NSCache *enumerationCache;

- (id)init;
- (void).cxx_destruct;
- (id)initWithStorage:(const unsigned int *)a0 count:(unsigned long long)a1;

@end
