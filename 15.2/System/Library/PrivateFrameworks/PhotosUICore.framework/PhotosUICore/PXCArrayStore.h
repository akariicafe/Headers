@interface PXCArrayStore : NSObject {
    unsigned long long _elementSize;
    void *_sharedArray;
    unsigned long long _sharedArrayCapacity;
    BOOL _isSharedArrayInUse;
}

- (id)init;
- (void)dealloc;
- (id)initWithElementSize:(unsigned long long)a0;
- (void)accessArrayWithElementsCount:(unsigned long long)a0 accessBlock:(id /* block */)a1;
- (void *)_sharedArrayWithElementsCount:(unsigned long long)a0;

@end
