@interface CAMCTMDescriptionOverlayView : CAMDescriptionOverlayView

- (id)_currentContentSize;
- (double)_additionalSpacingForContentSize:(id)a0;
- (id)titleTextUsingNarrowWidth:(BOOL)a0;
- (id)acknowledgmentTextUsingNarrowWidth:(BOOL)a0;
- (id)descriptionTitleTextUsingNarrowWidth:(BOOL)a0;
- (id)descriptionTextUsingNarrowWidth:(BOOL)a0;
- (id)infoTitleTextUsingNarrowWidth:(BOOL)a0;
- (id)infoTextUsingNarrowWidth:(BOOL)a0;
- (double)maxDescriptionTextWidthForNarrowWidth:(BOOL)a0 isLandscape:(BOOL)a1 usingFontSizeMultiplier:(double)a2;
- (double)maxInfoTextWidthForNarrowWidth:(BOOL)a0 isLandscape:(BOOL)a1 usingFontSizeMultiplier:(double)a2;
- (double)additionalSpacing;

@end
