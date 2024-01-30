@class NSString;
@protocol PVHostApplicationDelegate;

@interface PVHostApplicationDelegateHandler : NSObject <PVHostApplicationDelegate>

@property (retain, nonatomic) id<PVHostApplicationDelegate> hostApplicationDelegate;
@property (nonatomic) BOOL cacheDelegateResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
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
- (BOOL)wantsSameAlignmentForAllLinesOfText;
- (BOOL)wantsToDownscaleGlyphsToOutputSize;
- (BOOL)wantsToSetTranscriptionsUsingArray;
- (BOOL)wantsToIgnoreTextBoundsOfTransparentObjects;
- (BOOL)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
- (BOOL)wantsToUseCachedTextureForText;
- (BOOL)wantsToIncludeSubstituteFontNameInAttributedString;
- (BOOL)wantsToIncludeTrackingValueInAttributedString;
- (BOOL)wantsToComputeTypographicHeightWithoutLastLineLeading;
- (BOOL)wantsToAdjustTextBoundsHeightUsingCapHeight;
- (BOOL)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
- (BOOL)wantsToCacheTopLevelGroupRender;
- (BOOL)wantsToAssertThatLoadedSceneHasAnimateFlagDisabled;
- (BOOL)wantsToAssertThatTopLevelGroupSpansEntireScene;
- (unsigned int)getMaxGlyphResolution;

@end
