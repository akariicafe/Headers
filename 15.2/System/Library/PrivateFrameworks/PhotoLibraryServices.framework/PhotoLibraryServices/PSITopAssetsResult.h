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

- (void).cxx_destruct;
- (id)init;
- (void)fetchAssetUUIDsWithCompletionHandler:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
