@class NSString, SBHLibraryCategory;

@interface SBHLibraryPodCategoryIcon : SBLeafIcon <SBHLibraryCategoryObserver>

@property (readonly, nonatomic) SBHLibraryCategory *category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCategory:(id)a0;
- (long long)labelAccessoryType;
- (BOOL)isCategoryIcon;
- (void)categoryDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
