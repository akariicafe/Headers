@class NSArray, NSString;

@interface PXSelectedItemsStack : PXObservable <PXMutableSelectedItemsStack>

@property (copy, nonatomic) NSArray *topItemReferences;
@property (copy, nonatomic) NSArray *topItems;
@property (readonly, nonatomic) long long depth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (id)mutableChangeObject;
- (id)initWithDepth:(long long)a0;
- (void)updateWithSelectedItemsSnapshot:(id)a0;

@end
