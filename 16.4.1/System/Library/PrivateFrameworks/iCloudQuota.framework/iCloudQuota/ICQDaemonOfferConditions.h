@class NSNumber;

@interface ICQDaemonOfferConditions : NSObject <NSCopying>

@property (class, readonly, nonatomic) BOOL isDeviceStorageAlmostFull;
@property (class, readonly, nonatomic) BOOL isPhotosCloudEnabled;
@property (class, readonly, nonatomic) BOOL hasPhotosCloudEverBeenEnabled;
@property (class, readonly, nonatomic) BOOL isPhotosOptimizeEnabled;
@property (class, readonly, nonatomic) NSNumber *photosLibrarySize;
@property (class, readonly, nonatomic) NSNumber *photosLibraryUploadSize;
@property (class, readonly, nonatomic) NSNumber *photosVideosCount;
@property (class, nonatomic, getter=isSimulatedDeviceStorageAlmostFull) BOOL simulatedDeviceStorageAlmostFull;
@property (class, readonly, nonatomic) BOOL isDeviceStorageNearLowButNotLow;
@property (class, readonly, nonatomic) BOOL isCachedCloudQuotaAlmostFullOrFull;

@property (nonatomic, getter=isDeviceStorageAlmostFull) BOOL deviceStorageAlmostFull;
@property (nonatomic, getter=isPhotosCloudEnabled) BOOL photosCloudEnabled;
@property (nonatomic, getter=isPhotosOptimizeEnabled) BOOL photosOptimizeEnabled;
@property (copy, nonatomic) NSNumber *photosLibrarySize;

+ (void)getPhotosLibraryUploadSizeWithCompletion:(id /* block */)a0;
+ (id)currentConditions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCurrentConditions;

@end
