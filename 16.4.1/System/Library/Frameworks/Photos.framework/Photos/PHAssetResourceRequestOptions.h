@class NSNumber;

@interface PHAssetResourceRequestOptions : NSObject <NSCopying>

@property (nonatomic) BOOL resistentToPrune;
@property (nonatomic) BOOL downloadIsTransient;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) BOOL pruneAfterAvailableOnLowDisk;
@property (nonatomic) NSNumber *pruneAfterAvailableLowDiskThresholdBytes;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
