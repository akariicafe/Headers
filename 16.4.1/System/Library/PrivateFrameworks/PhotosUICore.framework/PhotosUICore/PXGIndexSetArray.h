@interface PXGIndexSetArray : NSObject {
    long long _capacity;
}

@property (nonatomic) long long count;
@property (readonly, nonatomic) void **indexSetReferences;

- (void)dealloc;
- (void)removeAllIndexes;
- (id)description;

@end
