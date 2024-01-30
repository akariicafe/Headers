@class PLPhotoLibrary, NSString, PLManagedAsset;

@interface PLDeferredPhotoPendingAssetRecord : NSObject

@property (retain) PLManagedAsset *asset;
@property (retain) PLPhotoLibrary *library;
@property (retain) NSString *requestReason;
@property BOOL isBackgroundPriority;
@property unsigned long long signpostId;

- (void).cxx_destruct;

@end
