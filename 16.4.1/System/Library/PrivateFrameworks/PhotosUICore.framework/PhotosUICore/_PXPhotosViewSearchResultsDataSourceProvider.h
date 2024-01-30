@class NSString, NSArray;

@interface _PXPhotosViewSearchResultsDataSourceProvider : NSObject <PXPhotosDataSourceProvider> {
    NSArray *_assetUUIDs;
    NSString *_title;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAssetUUIDs:(id)a0 searchTitle:(id)a1;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)a0;
- (id)loadInitialPhotosDataSourceForDataSourceManager:(id)a0;
- (id)localizedInitialLoadingStatusMessageForDataSourceManager:(id)a0;

@end
