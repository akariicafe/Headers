@class LPLinkMetadata, NSString, NSURL, LPImage;

@interface LPLinkMetadataPresentationTransformer : NSObject

@property (copy, nonatomic) LPLinkMetadata *metadata;
@property (copy, nonatomic) NSURL *URL;
@property (nonatomic, getter=isComplete) BOOL complete;
@property (nonatomic) BOOL allowsTapToLoad;
@property (nonatomic) BOOL allowsTapping;
@property (nonatomic) BOOL allowsPlaybackControls;
@property (nonatomic) BOOL allowsPlayback;
@property (nonatomic) BOOL hasOverriddenBackgroundColor;
@property (nonatomic) unsigned long long preferredSizeClass;
@property (readonly, nonatomic) unsigned long long effectiveSizeClass;
@property (retain, nonatomic) LPImage *sourceContextIcon;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (nonatomic) double scaleFactor;
@property (readonly, copy, nonatomic) NSURL *originalURL;
@property (readonly, copy, nonatomic) NSURL *canonicalURL;
@property (readonly, nonatomic) BOOL hasMedia;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;

- (id)presentationProperties;
- (void).cxx_destruct;
- (id)init;
- (id)domainName;
- (id)commonPresentationPropertiesForStyle:(long long)a0;
- (void)_populateProperties:(id)a0 withPrimaryImage:(id)a1;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1 iconProperties:(id)a2 canBecomeImage:(BOOL)a3;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1;
- (unsigned long long)_rowConfigurationForStyle:(long long)a0;
- (void)_populateProperties:(id)a0 withPrimaryIcon:(id)a1 iconProperties:(id)a2;
- (id)unspecializedPresentationProperties;
- (id)domainNameForIndicator;
- (id)unspecializedPresentationPropertiesForStyle:(long long)a0;
- (BOOL)_prefersImageAsIconWithStyle:(long long)a0;
- (id)_lastResortIcon;
- (BOOL)shouldUseAppClipPresentation;
- (id)titleForStyle:(long long)a0;
- (id)subtitleForStyle:(long long)a0;
- (id)quotedTextForStyleIgnoringAllowsQuotedText:(long long)a0;
- (id)summaryForStyle:(long long)a0;
- (id)videoForStyle:(long long)a0;
- (id)quotedTextForStyle:(long long)a0;
- (BOOL)_hasNonMicroblogQuotedTextForStyle:(long long)a0;
- (long long)rendererStyle;
- (id)mainCaptionBarForStyle:(long long)a0;
- (id)backgroundColorForStyle:(long long)a0;
- (id)imageForStyle:(long long)a0 icon:(id *)a1 alternateImages:(id *)a2;
- (id)audioForStyle:(long long)a0;
- (id)arAssetForStyle:(long long)a0;
- (BOOL)_prefersLeadingIconWithStyle:(long long)a0;
- (BOOL)hasMediaWithProperties:(id)a0;
- (BOOL)_prefersIconAsImage;

@end
