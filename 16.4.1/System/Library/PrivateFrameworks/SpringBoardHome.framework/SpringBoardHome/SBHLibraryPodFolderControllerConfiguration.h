@class SBHLibraryCategoryMapProvider, SBHLibraryCategoriesRootFolder;

@interface SBHLibraryPodFolderControllerConfiguration : SBFolderControllerConfiguration

@property (retain, nonatomic) SBHLibraryCategoriesRootFolder *categoriesFolder;
@property (retain, nonatomic) SBHLibraryCategoryMapProvider *categoryMapProvider;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
