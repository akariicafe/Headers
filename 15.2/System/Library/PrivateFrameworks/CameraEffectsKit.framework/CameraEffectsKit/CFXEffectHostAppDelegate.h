@class NSString;
@protocol PVHostApplicationDelegate;

@interface CFXEffectHostAppDelegate : NSObject <PVHostApplicationDelegate>

@property (weak) id<PVHostApplicationDelegate> colorSpaceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)preferredDisplayColorSpace;
- (id)preferredExportColorSpace;
- (id)effectTemplatesDirectoryName;
- (id)effectTemplatesBundle;
- (BOOL)wantsExtraLineSpacingForDiacritics;
- (BOOL)wantsDynamicLineSpacingForDiacritics;
- (BOOL)wantsToScaleEmojiToCapHeight;
- (BOOL)wantsToSkipSuggestedLineBreaksInParagraphLayout;
- (BOOL)wantsToUseBinarySearchForScalingToBothMargins;
- (BOOL)wantsToLimitLinesOfText;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (BOOL)wantsToImproveQualityOfDraftQualityText;
- (BOOL)wantsToDownscaleGlyphsToOutputSize;
- (BOOL)wantsToSetTranscriptionsUsingArray;
- (BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
- (BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
- (BOOL)wantsToUseCachedTextureForText;
- (BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
- (BOOL)wantsToIncludeTrackingValueInAttributedString;
- (BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
- (BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
- (BOOL)wantsToCacheTopLevelGroupRender;
- (unsigned int)getMaxGlyphResolution;

@end
