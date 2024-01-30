@class NSMutableArray, MPSGraphType;

@interface MPSGraphListData : MPSGraphTensorData {
    NSMutableArray *_list;
    long long _maxSize;
    MPSGraphType *_elementType;
}

- (long long)maxSize;
- (id)list;
- (id)elementType;
- (void).cxx_destruct;
- (id)clonedList;
- (id)initEmptyListWithDevice:(id)a0 maxSize:(long long)a1 elementType:(id)a2;
- (id)initWithDevice:(id)a0 list:(id)a1 maxSize:(long long)a2 elementType:(id)a3;
- (id)mpsndarray;
- (id)popBackElement;
- (void)pushBackElement:(id)a0;

@end
