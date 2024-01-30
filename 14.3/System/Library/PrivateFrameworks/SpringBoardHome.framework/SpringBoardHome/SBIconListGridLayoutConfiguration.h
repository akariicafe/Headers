@class SBHRootFolderVisualConfiguration, NSString, SBHFloatyFolderVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHSidebarVisualConfiguration, NSMutableDictionary, SBHAppLibraryVisualConfiguration;

@interface SBIconListGridLayoutConfiguration : NSObject <NSCopying, BSDescriptionProviding> {
    NSMutableDictionary *_iconLabelVisualConfigurations;
    struct SBHIconGridSizeClassIconImageInfos { struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } icon; struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } small; struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } medium; struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } large; struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } extraLarge; } _iconGridSizeClassIconImageInfos;
}

@property (nonatomic) unsigned long long numberOfPortraitColumns;
@property (nonatomic) unsigned long long numberOfPortraitRows;
@property (nonatomic) unsigned long long numberOfLandscapeColumns;
@property (nonatomic) unsigned long long numberOfLandscapeRows;
@property (nonatomic) struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short columns; unsigned short rows; } small; struct SBHIconGridSize { unsigned short columns; unsigned short rows; } medium; struct SBHIconGridSize { unsigned short columns; unsigned short rows; } large; struct SBHIconGridSize { unsigned short columns; unsigned short rows; } extraLarge; } iconGridSizeClassSizes;
@property (nonatomic) unsigned long long supportedIconGridSizeClasses;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } portraitLayoutInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } landscapeLayoutInsets;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; } iconImageInfo;
@property (nonatomic) struct CGSize { double width; double height; } listSizeForIconSpacingCalculation;
@property (copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
@property (copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property (copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property (copy, nonatomic) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property (copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property (readonly, copy, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0 forGridSizeClass:(unsigned long long)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setIconLabelVisualConfiguration:(id)a0 forContentSizeCategory:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })iconImageInfoForGridSizeClass:(unsigned long long)a0;
- (id)iconLabelVisualConfigurationForContentSizeCategory:(id)a0;

@end
