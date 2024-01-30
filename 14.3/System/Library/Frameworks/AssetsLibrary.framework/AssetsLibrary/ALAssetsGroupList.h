@protocol PLAssetContainerList;

@interface ALAssetsGroupList : ALAssetsGroup

@property (readonly, retain, nonatomic) id<PLAssetContainerList> containerList;

- (id)valueForProperty:(id)a0;
- (void)dealloc;
- (id)initWithContainerList:(id)a0 library:(id)a1 type:(unsigned long long)a2;
- (void)_enumerateAssetsAtIndexes:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;

@end
