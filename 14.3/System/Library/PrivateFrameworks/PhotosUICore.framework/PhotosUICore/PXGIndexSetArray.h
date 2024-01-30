@interface PXGIndexSetArray : NSObject {
    long long _capacity;
}

@property (nonatomic) long long count;
@property (readonly, nonatomic) void **indexSetReferences;

- (void)dealloc;
- (id)description;
- (void)removeAllIndexes;

@end
