@class NSString, PHFetchResult, PHObject, PHAssetCollection;

@interface PXRelatedEntry : NSObject <PXRelatedEntry>

@property (retain, nonatomic) NSString *relatedLocalizedTitle;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult;
@property (readonly, nonatomic) PHObject *referenceObject;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic) PHFetchResult *relatedKeyAssetFetchResult;
@property (readonly, nonatomic) NSString *relatedLocalizedSubtitle;
@property (readonly, nonatomic) PHAssetCollection *relatedAssetCollection;
@property (readonly, nonatomic) PHObject *relatedReferenceObject;
@property (readonly, nonatomic) NSString *relatedTitleFontName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
