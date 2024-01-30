@class NSString, SBHSearchVisualConfiguration;

@interface SBHAppLibraryVisualConfiguration : NSObject <NSCopying, BSDescriptionProviding>

@property (nonatomic) struct CGSize { double width; double height; } portraitCategoryPodIconSpacing;
@property (nonatomic) struct CGSize { double width; double height; } landscapeCategoryPodIconSpacing;
@property (nonatomic) struct CGSize { double width; double height; } expandedCategoryPodIconSpacing;
@property (nonatomic) BOOL usesInsetPlatterSearchAppearance;
@property (nonatomic) double searchContinuousCornerRadius;
@property (retain, nonatomic) SBHSearchVisualConfiguration *extendedSearchVisualConfiguration;
@property (retain, nonatomic) SBHSearchVisualConfiguration *standardSearchVisualConfiguration;
@property (retain, nonatomic) SBHSearchVisualConfiguration *compactSearchVisualConfiguration;
@property (retain, nonatomic) SBHSearchVisualConfiguration *activeSearchVisualConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;

@end
