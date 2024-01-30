@class PLPhotoLibraryPathManagerIdentifier, NSString, NSURL, PHPhotoLibrary, NSDate, NSManagedObjectID;
@protocol PLResourceIdentity;

@interface PHAssetResource : NSObject <PHCPLAssetResource> {
    long long _pixelWidth;
    long long _pixelHeight;
    unsigned long long _fileSize;
    NSDate *_trashedDate;
    BOOL _trashed;
    BOOL _inCloud;
    PHPhotoLibrary *_photoLibrary;
    id /* block */ _privateFileLoader;
}

@property (readonly, nonatomic) NSURL *privateFileURL;
@property (readonly, copy, nonatomic) id /* block */ privateFileLoader;
@property (readonly, nonatomic) long long pixelWidth;
@property (readonly, nonatomic) long long pixelHeight;
@property (readonly, nonatomic) long long analysisType;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic, getter=isTrashed) BOOL trashed;
@property (readonly, nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable;
@property (readonly, nonatomic, getter=isInCloud) BOOL inCloud;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) id<PLResourceIdentity> backingResourceIdentity;
@property (readonly, nonatomic) NSManagedObjectID *assetObjectID;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned long long cplResourceType;
@property (nonatomic, getter=isLocallyAvailable) BOOL locallyAvailable;
@property (retain, nonatomic) NSURL *privateFileURL;
@property (readonly, nonatomic, getter=isCurrent) BOOL current;
@property (readonly, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *originalFilename;

+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(BOOL)a1 includeMetadata:(BOOL)a2;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(BOOL)a1 includeMetadata:(BOOL)a2 includeAdjustmentOverflowDataBlob:(BOOL)a3;
+ (id)assetResourcesForLivePhoto:(id)a0;
+ (id)assetResourcesForAsset:(id)a0 includeDerivatives:(BOOL)a1;
+ (id)assetResourcesForAsset:(id)a0;
+ (id)_assetResourcesFromPLResources:(id)a0 includeMetadata:(BOOL)a1 mediaMetadataVirtualResources:(id)a2 asset:(id)a3 assetHasAdjustments:(BOOL)a4 includeDerivatives:(BOOL)a5 includeAdjustmentOverflowDataBlob:(BOOL)a6;
+ (id)assetResourceForAsset:(id)a0 qualityClass:(id)a1;

- (id)initWithResource:(id)a0 asset:(id)a1 hasAdjustments:(BOOL)a2;
- (id)initWithType:(long long)a0 livePhoto:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;

@end
