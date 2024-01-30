@class NSArray, NSString;

@interface PXSelectedItemsStack : PXObservable <PXMutableSelectedItemsStack>

@property (copy, nonatomic) NSArray *topItemReferences;
@property (copy, nonatomic) NSArray *topItems;
@property (readonly, nonatomic) long long depth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performChanges:(id /* block */)a0;
- (void)updateWithSelectedItemsSnapshot:(id)a0;
- (id)mutableChangeObject;
- (id)init;
- (id)initWithDepth:(long long)a0;
- (void).cxx_destruct;

@end
