@class NSIndexSet;

@interface PLPositionalTableEntries : NSObject {
    void **_buffers;
}

@property (readonly, nonatomic) unsigned long long entryLength;
@property (readonly, nonatomic) NSIndexSet *readIndexes;

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateIndexes:(id /* block */)a0;
- (id)initWithBuffers:(void *)a0 forIndexes:(id)a1 entryLength:(unsigned long long)a2;

@end
