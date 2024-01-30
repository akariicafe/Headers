@class NSString, SBHLibraryAdditionalItemsIndicatorIcon, NSArray, SBHLibraryCategoryFolder, SBHLibraryCategoryIdentifier, NSHashTable;
@protocol SBIconDelegate;

@interface SBHLibraryCategory : NSObject <SBLeafIconDataSource, SBIconObserver, NSFastEnumeration> {
    NSHashTable *_observers;
    long long _aggregrateIconLabelAccessoryType;
}

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) SBHLibraryCategoryIdentifier *categoryIdentifier;
@property (nonatomic) long long overflowBehavior;
@property (readonly, copy, nonatomic) NSString *leafIdentifier;
@property (readonly, nonatomic) SBHLibraryAdditionalItemsIndicatorIcon *additionalItemsIndicatorIcon;
@property (readonly, copy, nonatomic) NSArray *icons;
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodFolder;
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *compactPodAdditionalItemsFolder;
@property (readonly, copy, nonatomic) SBHLibraryCategoryFolder *expandedPodFolder;
@property (weak, nonatomic) id<SBIconDelegate> iconDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (long long)labelAccessoryTypeForIcon:(id)a0;
- (id)icon:(id)a0 displayNameForLocation:(id)a1;
- (void)_noteCategoryWillUpdate;
- (unsigned long long)priorityForIcon:(id)a0;
- (void)_localizedDisplayNameChangedTo:(id)a0;
- (id)_buildDisplayedIconsForFolder:(id)a0 icons:(id)a1;
- (void)addObserver:(id)a0;
- (BOOL)isEqualToCategory:(id)a0;
- (BOOL)updateCategoryWithIcons:(id)a0;
- (void)_refreshAggregateIconLabelAccessoryType;
- (void)_noteCategoryDidUpdate;
- (void)_noteFolderWillUpdateIcons:(id)a0;
- (void)iconAccessoriesDidUpdate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_noteFolderDidUpdateIcons:(id)a0;
- (BOOL)updateCategoryIdentifier:(id)a0;
- (BOOL)iconSupportsUninstall:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
