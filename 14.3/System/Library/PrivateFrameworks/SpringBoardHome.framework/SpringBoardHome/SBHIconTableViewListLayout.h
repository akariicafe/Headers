@class SBHFloatyFolderVisualConfiguration, SBHAppLibraryVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHSidebarVisualConfiguration, SBHRootFolderVisualConfiguration, SBHFolderIconVisualConfiguration, NSString;

@interface SBHIconTableViewListLayout : NSObject <SBIconListLayout>

@property (readonly, nonatomic) struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } iconImageInfo;
@property (readonly, copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (readonly, copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (readonly, copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (readonly, copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly, copy, nonatomic) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property (readonly, copy, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (readonly, nonatomic) struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x0; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x1; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x2; struct SBHIconGridSize { unsigned short x0; unsigned short x1; } x3; } iconGridSizeClassSizes;
@property (readonly, nonatomic) unsigned long long supportedIconGridSizeClasses;
@property (readonly, nonatomic) BOOL usesAlternateLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })layoutInsetsForOrientation:(long long)a0;
- (unsigned long long)numberOfColumnsForOrientation:(long long)a0;
- (unsigned long long)numberOfRowsForOrientation:(long long)a0;

@end
