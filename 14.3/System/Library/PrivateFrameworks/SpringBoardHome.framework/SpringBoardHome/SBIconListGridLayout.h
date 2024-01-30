@class SBHRootFolderVisualConfiguration, NSString, SBIconListGridLayoutConfiguration, SBHFloatyFolderVisualConfiguration, UIFont, SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHSidebarVisualConfiguration, NSMutableDictionary, SBHAppLibraryVisualConfiguration;

@interface SBIconListGridLayout : NSObject <SBIconListLayout, BSDescriptionProviding> {
    NSMutableDictionary *_labelFonts;
    UIFont *_accessoryFont;
    UIFont *_accessoryBoldFont;
}

@property (readonly, copy, nonatomic) SBIconListGridLayoutConfiguration *layoutConfiguration;
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
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)noteIcons:(id)a0 didDropAtCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1 inList:(id)a2;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)numberOfColumnsForOrientation:(long long)a0;
- (unsigned long long)numberOfRowsForOrientation:(long long)a0;
- (id)labelVisualConfigurationForContentSizeCategory:(id)a0 options:(unsigned long long)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)initWithLayoutConfiguration:(id)a0;
- (id)labelFontForContentSizeCategory:(id)a0 options:(unsigned long long)a1;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })iconImageInfoForGridSizeClass:(unsigned long long)a0;
- (id)accessoryFontForContentSizeCategory:(id)a0 options:(unsigned long long)a1;
- (id)accessoryBoldFont;
- (id)accessoryFont;

@end
