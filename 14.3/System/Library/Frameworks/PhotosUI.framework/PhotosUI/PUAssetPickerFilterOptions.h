@class NSPredicate, NSIndexSet;
@protocol PUPickerFilter;

@interface PUAssetPickerFilterOptions : NSObject

@property (readonly, nonatomic) NSPredicate *selectionFilterAssetFetchPredicate;
@property (readonly, nonatomic) NSIndexSet *includedItems;
@property (readonly, nonatomic) id<PUPickerFilter> selectionFilter;
@property (readonly, nonatomic) unsigned long long genericAssetTypes;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMediaTypes:(id)a0;
- (BOOL)isIncluded:(unsigned long long)a0;
- (id)initWithIncludedItems:(id)a0;
- (id)initWithSelectionFilter:(id)a0;
- (id)predicateForAssetFetch;
- (id)predicateForAlbumFetch;

@end
