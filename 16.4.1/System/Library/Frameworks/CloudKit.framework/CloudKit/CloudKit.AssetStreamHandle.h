@class _TtC8CloudKit17AssetStreamHandle, NSString, C2RequestOptions, NSURL, NSData, NSError;

@interface CloudKit.AssetStreamHandle : NSObject {
    void /* unknown type, empty encoding */ chunkHandles;
    void /* unknown type, empty encoding */ assetType;
}

@property (class, nonatomic) BOOL useNetworkingDelegate;
@property (class, nonatomic, readonly) C2RequestOptions *networkRequestOptions;

@property (nonatomic, readonly) long long size;

+ (void)makeAssetStreamHandleFrom:(NSURL *)a0 with:(NSData *)a1 for:(NSString *)a2 completionHandler:(void (^)(_TtC8CloudKit17AssetStreamHandle *, NSError *))a3;

- (id)init;
- (void).cxx_destruct;
- (id)initFrom:(id)a0 error:(id *)a1;
- (id)makeAVPlayerItemWith:(id)a0 options:(id)a1;
- (id)serializedDataAndReturnError:(id *)a0;

@end
