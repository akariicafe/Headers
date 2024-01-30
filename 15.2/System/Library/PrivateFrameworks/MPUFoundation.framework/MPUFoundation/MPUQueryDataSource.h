@class NSArray, MPMediaItemCollection, NSMutableSet, MPMediaQuerySectionInfo, MPMediaQuery;

@interface MPUQueryDataSource : MPUDataSource {
    NSArray *_entities;
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;
    BOOL _hasValidEmpty;
    BOOL _hasValidRepresentativeCollection;
    BOOL _invalidateWhenEnteringForeground;
    BOOL _isEmpty;
    MPMediaItemCollection *_representativeCollection;
    MPMediaQuerySectionInfo *_sectionInfo;
}

@property (readonly, nonatomic) MPMediaQuery *query;
@property (nonatomic) BOOL ignoringInvalidationDueToBackgroundApplicationState;

- (id)localizedSectionIndexTitles;
- (unsigned long long)numberOfSections;
- (void)encodeWithCoder:(id)a0;
- (id)entities;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (unsigned long long)count;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)_defaultMediaLibraryDidChangeNotification:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_representativeCollection;
- (id)_sectionInfo;
- (id)initWithEntityType:(long long)a0;
- (id)initWithQuery:(id)a0 entityType:(long long)a1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)a0;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)a0;
- (void)_invalidateCalculatedEntities;
- (id)queryForEntityAtIndex:(unsigned long long)a0;
- (void)_invalidateIfNeeded;
- (void)_invalidateForDisplayValuesChangeIfNeeded;
- (BOOL)canEditEntityAtIndex:(unsigned long long)a0;
- (BOOL)canSelectEntityAtIndex:(unsigned long long)a0;
- (void)deleteEntityAtIndex:(unsigned long long)a0;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)a0;
- (id)queryForEntityAtIndexPath:(id)a0;
- (BOOL)showsIndexBar;
- (id)localizedSectionTitleAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSectionAtIndex:(unsigned long long)a0;
- (BOOL)showsEntityCountFooter;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)a0;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)a0;
- (void)_isCloudEnabledDidChangeNotification:(id)a0;
- (BOOL)_deleteHidesFromCloudForIndex:(unsigned long long)a0 hidesAll:(out BOOL *)a1;

@end
