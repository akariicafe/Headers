@class NSArray;

@interface PLSortedChangedObjects : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id *sortedObjectPointers;
@property (readonly, nonatomic) NSArray *changedObjects;

- (id)initWithChangedObjects:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
