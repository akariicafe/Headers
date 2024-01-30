@class NSString, NSArray, NSKnownKeysDictionary, PHPhotoLibrary, NSManagedObjectID;

@interface PHThumbnailAsset : NSObject <_PLThumbnailLoadingAsset, PHThumbnailAsset, PHBatchFetchedPropertySet> {
    NSKnownKeysDictionary *_dictionary;
}

@property (class, readonly, copy, nonatomic) NSString *entityName;
@property (class, readonly, nonatomic) NSArray *propertiesToFetch;
@property (class, readonly, nonatomic) NSString *fetchType;
@property (class, readonly, nonatomic) long long batchSize;
@property (class, readonly, nonatomic) long long cacheSize;
@property (class, readonly, nonatomic) BOOL useNoIndexSelf;
@property (class, readonly, nonatomic) BOOL useObjectFetchingContext;
@property (class, readonly, nonatomic) NSArray *propertiesToSortBy;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long thumbnailIndex;
@property (readonly, nonatomic) BOOL complete;
@property (readonly, nonatomic) long long cloudPlaceholderKind;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)effectiveThumbnailIndex;
- (void).cxx_destruct;
- (id)pl_photoLibrary;
- (id)initWithObjectID:(id)a0 knownKeysDictionary:(id)a1 photoLibrary:(id)a2;

@end
