@protocol SKUIEntityProviding;

@interface SKUIDynamicPageSectionIndexMapper : NSObject {
    struct _NSRange { unsigned long long x0; unsigned long long x1; } *_sectionIndexToEntityRange;
    long long _numberOfSections;
    struct { unsigned char respondsToNumberOfSections : 1; } _entityProviderFlags;
}

@property (retain, nonatomic) id<SKUIEntityProviding> entityProvider;
@property (readonly, nonatomic) long long numberOfSections;
@property (readonly, nonatomic) long long totalNumberOfEntities;

- (void)reloadData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)entityIndexPathForGlobalIndex:(long long)a0;
- (void)_loadDataIfNeeded;
- (BOOL)getItem:(unsigned long long *)a0 section:(unsigned long long *)a1 forGlobalIndex:(long long)a2;
- (long long)globalIndexForEntityIndexPath:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForSectionAtIndex:(long long)a0;

@end
