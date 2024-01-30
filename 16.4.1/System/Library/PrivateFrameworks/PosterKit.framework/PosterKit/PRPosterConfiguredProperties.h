@class PRPosterColorVariationsConfiguration, NSString, PRPosterSuggestionMetadata, PRPosterMetadata, PRPosterTitleStyleConfiguration, PRPosterHomeScreenConfiguration, PRPosterRenderingConfiguration, PRPosterComplicationLayout, PRPosterFocusConfiguration;

@interface PRPosterConfiguredProperties : NSObject <BSDescriptionStreamable, NSSecureCoding, BSXPCSecureCoding, NSMutableCopying, NSCopying> {
    NSString *_persistenceIdentifierWithComplications;
    NSString *_persistenceIdentifierWithoutComplications;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) PRPosterTitleStyleConfiguration *titleStyleConfiguration;
@property (copy, nonatomic) PRPosterFocusConfiguration *focusConfiguration;
@property (copy, nonatomic) PRPosterComplicationLayout *complicationLayout;
@property (copy, nonatomic) PRPosterRenderingConfiguration *renderingConfiguration;
@property (copy, nonatomic) PRPosterHomeScreenConfiguration *homeScreenConfiguration;
@property (copy, nonatomic) PRPosterColorVariationsConfiguration *colorVariationsConfiguration;
@property (copy, nonatomic) PRPosterSuggestionMetadata *suggestionMetadata;
@property (copy, nonatomic) PRPosterMetadata *otherMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)configuredPropertiesSanitizedForPassingToExtension:(id)a0;
+ (id)defaultConfiguredProperties;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isImmutable;
- (id)initWithTitleStyleConfiguration:(id)a0 focusConfiguration:(id)a1 complicationLayout:(id)a2 renderingConfiguration:(id)a3 homeScreenConfiguration:(id)a4 colorVariationsConfiguration:(id)a5 suggestionMetadata:(id)a6 otherMetadata:(id)a7;
- (BOOL)isEqualToConfiguredProperties:(id)a0;
- (id)persistenceIdentifierWithComplications:(BOOL)a0;

@end
