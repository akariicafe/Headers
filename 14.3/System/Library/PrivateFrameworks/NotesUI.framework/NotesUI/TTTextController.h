@class TTZoomController, NSString;

@interface TTTextController : NSObject <TTTextStorageStyler>

@property (nonatomic) double bodyStyleFontSizeThreshold;
@property (nonatomic) double headingStyleFontSizeThreshold;
@property (retain, nonatomic) TTZoomController *zoomController;
@property (nonatomic) BOOL keepNSTextTableAttributes;
@property (nonatomic) BOOL disableSingleLineA;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)superscriptScaleFactor;
+ (id)preferredFontForTTTextStyle:(unsigned int)a0;
+ (double)bodyParagraphSpacing;
+ (double)bodyParagraphSpacingBefore;
+ (double)attachmentParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;

- (id)init;
- (void).cxx_destruct;
- (id)titleAttributes;
- (id)defaultParagraphStyle;
- (id)styleForModelAttributes:(id)a0;
- (id)modelForStyleAttributes:(id)a0 filterAttributes:(BOOL)a1;
- (void)styleText:(id)a0 inExactRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fixModelAttributes:(BOOL)a2;
- (void)styleText:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fixModelAttributes:(BOOL)a2;
- (id)headingAttributes;
- (id)subheadingAttributes;
- (id)bodyAttributes;
- (id)fixedWidthAttributes;
- (id)defaultListAttributes;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)a0;
- (void)resetGuessedFontSizes;
- (void)styleFontInAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 contentSizeCategory:(id)a2;
- (void)styleListsAndIndentsInAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)preferredAttributesForTTTextStyle:(unsigned int)a0;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSelectionChange:(BOOL)a1 currentTypingAttributes:(id)a2 inTextStorage:(id)a3;
- (id)strippedTypingAttributesAtStartOfParagraph:(id)a0 atTheEndOfDocument:(BOOL)a1 isTyping:(BOOL)a2;
- (void)fixModelAttributesInTextStorage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)defaultTypingAttributesForEmptyDocument;
- (id)titleAttributesWithContentSizeCategory:(id)a0;
- (id)headingAttributesWithContentSizeCategory:(id)a0;
- (id)subheadingAttributesWithContentSizeCategory:(id)a0;
- (id)captionAttributesWithContentSizeCategory:(id)a0;
- (id)bodyAttributesWithContentSizeCategory:(id)a0;
- (id)defaultListAttributesWithContentSizeCategory:(id)a0;
- (id)checklistAttributesWithContentSizeCategory:(id)a0;
- (id)fixedWidthAttributesWithContentSizeCategory:(id)a0;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forSelectionChange:(BOOL)a1 forSettingTextStyle:(BOOL)a2 currentTypingAttributes:(id)a3 inTextStorage:(id)a4;
- (id)copyAttribute:(id)a0 fromAttributes:(id)a1 toAttributes:(id)a2;
- (id)referenceAttributesForLocation:(unsigned long long)a0 textStorage:(id)a1 currentParagraphStart:(unsigned long long)a2;
- (id)removeAttribute:(id)a0 ifInconsistentAtLocation:(unsigned long long)a1 inTextStorage:(id)a2 forNewTypingAttributes:(id)a3;
- (id)copyNSParagraphStylefromAttributes:(id)a0 toAttributes:(id)a1;
- (id)styleForModelAttributes:(id)a0 contentSizeCategory:(id)a1;
- (void)addBIToStyle:(id)a0;
- (id)captionAttributes;
- (void)styleFontInTextStorage:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)checklistAttributes;
- (id)typingAttributesForSettingTextStyleForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 currentTypingAttributes:(id)a1 inTextStorage:(id)a2;
- (id)filterStyleAttributes:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
