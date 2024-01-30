@class NSArray, PLManagedObjectContext;
@protocol PLPTPConversionSupport;

@interface PLPTPdAssetEnumerator : NSObject {
    PLManagedObjectContext *_managedObjectContext;
    NSArray *_assetObjectIDs;
    id<PLPTPConversionSupport> _conversionSupport;
}

+ (id)enumeratorWithAssetObjectIDs:(id)a0 managedObjectContext:(id)a1 conversionSupport:(id)a2;

- (void).cxx_destruct;
- (void)enumerateAssetsUsingBlock:(id /* block */)a0;
- (id)initWithAssetObjectIDs:(id)a0 managedObjectContext:(id)a1 conversionSupport:(id)a2;
- (BOOL)enumerateAssetsWithCount:(unsigned long long)a0 fetchOffset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)assetsFromOffset:(unsigned long long)a0 count:(unsigned long long)a1;

@end
