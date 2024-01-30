@interface BWRingBuffer : NSObject <NSFastEnumeration> {
    void *_ringBuffer;
    int _outputIndex;
    int _inputIndex;
    int _length;
    unsigned long long _typeSize;
}

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void *)lastElement;
- (void *)elementAtIndex:(int)a0;
- (void)incrementRingIndex:(int *)a0;
- (void)dealloc;
- (int)lastElementIndexPlusOne;
- (void *)firstElement;
- (int)count;
- (id)initWithLength:(int)a0 dataTypeSize:(unsigned long long)a1;
- (int)lastElementIndex;
- (void)incrementRingIndex:(int *)a0 withCount:(int)a1;
- (void)appendElement:(void *)a0;
- (void)removeFirstElements:(int)a0;
- (int)firstElementIndex;

@end
