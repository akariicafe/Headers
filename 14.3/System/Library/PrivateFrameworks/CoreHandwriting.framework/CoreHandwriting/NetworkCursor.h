@interface NetworkCursor : NSObject {
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } _nodeIndexes;
}

@property (nonatomic) unsigned long long stateType;

+ (id)cursorByAddingNodeIndex:(unsigned long long)a0 toCursor:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isCompletePattern;
- (unsigned long long)nodeIndexCount;
- (unsigned long long)nodeIndexAtPosition:(unsigned long long)a0;
- (void)addNodeIndex:(unsigned long long)a0 withStateType:(unsigned long long)a1;

@end
