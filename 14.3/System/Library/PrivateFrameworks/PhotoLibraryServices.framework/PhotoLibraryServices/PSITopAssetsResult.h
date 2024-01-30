@class NSArray, NSObject;
@protocol PSITopAssetsResultDelegate, OS_dispatch_queue;

@interface PSITopAssetsResult : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSArray *_assetUUIDs;
}

@property (retain, nonatomic) const struct __CFArray { } *assetIds;
@property (weak, nonatomic) id<PSITopAssetsResultDelegate> delegate;
@property (readonly, nonatomic) unsigned long long assetMatchCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)fetchAssetUUIDsWithCompletionHandler:(id /* block */)a0;

@end
