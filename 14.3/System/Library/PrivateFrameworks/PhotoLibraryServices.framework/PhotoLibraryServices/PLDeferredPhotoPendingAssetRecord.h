@class NSString, PLManagedAsset;

@interface PLDeferredPhotoPendingAssetRecord : NSObject

@property (retain) PLManagedAsset *asset;
@property (retain) NSString *requestReason;
@property BOOL isBackgroundPriority;

- (void).cxx_destruct;

@end
