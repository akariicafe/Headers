@class NSURL;

@interface AVManagedAssetCacheInternal : NSObject {
    NSURL *url;
    BOOL enableHLSCache;
    BOOL enableCRABSCache;
}

@end
