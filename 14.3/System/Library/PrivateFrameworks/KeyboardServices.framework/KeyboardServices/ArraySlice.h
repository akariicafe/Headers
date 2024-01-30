@class NSArray;

@interface ArraySlice : NSArray {
    NSArray *_array;
    unsigned long long _offset;
    unsigned long long _count;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithArray:(id)a0 offset:(unsigned long long)a1 count:(unsigned long long)a2;

@end
