@class PRPosterColorVariationsConfiguration, PRPosterSuggestionMetadata, PRPosterMetadata, PRPosterTitleStyleConfiguration, PRPosterHomeScreenConfiguration, PRPosterRenderingConfiguration, PRPosterComplicationLayout, PRPosterFocusConfiguration;

@interface PRPosterMutableConfiguredProperties : PRPosterConfiguredProperties

@property (copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration;
@property (copy, nonatomic) PRPosterComplicationLayout *complicationLayout;
@property (copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration;
@property (copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (copy, nonatomic) PRPosterColorVariationsConfiguration *colorVariationsConfiguration;
@property (copy, nonatomic) PRPosterSuggestionMetadata *suggestionMetadata;
@property (copy, nonatomic) PRPosterMetadata *otherMetadata;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;

- (void)mergeConfiguredProperties:(id)a0;
- (BOOL)_isImmutable;

@end
