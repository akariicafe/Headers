@class NSMutableArray;

@interface AXHARingBuffer : NSObject {
    NSMutableArray *_bufferArray;
    long long _size;
    long long _head;
}

@property (readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)initWithCount:(unsigned long long)a0;
- (void)reset;
- (void)addObject:(id)a0;
- (id)content;

@end
