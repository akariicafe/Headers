@interface PXGComponentDataStore : NSObject {
    char *_data;
}

@property (readonly, nonatomic) unsigned long long elementSize;
@property (nonatomic) long long capacity;

- (const void *)contents;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopy;
- (unsigned long long)byteSize;
- (id)initWithElementSize:(unsigned long long)a0;

@end
