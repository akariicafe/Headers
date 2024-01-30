@class NSMutableData, NSMutableArray;

@interface MSRColorConfigMemoryPool : NSObject {
    NSMutableArray *_array;
    NSMutableData *_data;
    unsigned int _size;
    unsigned int _capacity;
    unsigned int _allocated;
    unsigned int _released;
}

- (void)dealloc;
- (void)dumpPoolState;
- (id)generateColorConfig:(id)a0 msrCU:(void *)a1;
- (id)getAlloc;
- (id)initWithCapacity:(unsigned int)a0 Size:(unsigned int)a1;

@end
