@class NSMutableArray, MPSGraphType;

@interface MPSGraphListData : MPSGraphTensorData {
    NSMutableArray *_list;
    long long _maxSize;
    MPSGraphType *_elementType;
}

- (long long)maxSize;
- (id)list;
- (id)mpsndarray;
- (id)elementType;
- (void).cxx_destruct;
- (id)initEmptyListWithDevice:(id)a0 maxSize:(long long)a1 elementType:(id)a2;
- (id)clonedList;
- (void)pushBackElement:(id)a0;
- (id)popBackElement;
- (id)initWithDevice:(id)a0 list:(id)a1 maxSize:(long long)a2 elementType:(id)a3;

@end
