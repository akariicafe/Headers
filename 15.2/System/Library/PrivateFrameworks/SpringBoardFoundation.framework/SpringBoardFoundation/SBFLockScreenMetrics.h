@interface SBFLockScreenMetrics : NSObject

+ (double)scaledFontSize:(double)a0 withMaximumFontSizeCategory:(id)a1;
+ (double)_notificationListBottomOffset;
+ (double)_notificationListSideOffset;
+ (double)dateViewBaselineY;
+ (double)dateBaselineOffsetFromTime;
+ (double)_notificationListTopPadding;
+ (struct CGSize { double x0; double x1; })proudLockAssetSize;
+ (double)dateViewSideMargin;
+ (double)subtitleBaselineOffsetFromTopOfScreen;
+ (double)dateLabelFontSize;
+ (double)slideUpGrabberInset;
+ (double)slideToUnlockFontSize;
+ (double)slideToUnlockOverlayMargin;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })slideToUnlockInsets;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })notificationListInsets;
+ (double)logoutLabelFontSize;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })logoutInsets;
+ (double)deviceInformationLabelFontSize;
+ (double)deviceInformationLabelFontLeading;
+ (double)deviceInformationParagraphSpacing;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })deviceInformationInsets;
+ (double)proudLockOffsetFromTopOfScreen;
+ (double)pinKeypadStatusTitleBaselineOffsetFromEntryField;
+ (double)_subTitleHeight;
+ (double)pinNumberPadBaseOffsetFromTopOfScreen:(BOOL)a0;
+ (double)pinFixedDigitEntryFieldBottomYDistanceFromNumberPadTopButton:(BOOL)a0;
+ (double)pinFixedDigitEntryFieldIndicatorDiameter;
+ (double)pinFixedDigitEntryFieldIndicatorStrokeSize;
+ (double)pinFixedDigitEntryFieldIndicatorPaddingWidth;
+ (double)pinNumberPadWidth;
+ (double)pinNumberPadBottomPaddingHeight;
+ (double)pinNumberPadAncillaryButtonOffset;
+ (double)pinNumberPadButtonPaddingHeight;
+ (double)pinNumberPadButtonPaddingWidth;
+ (double)pinNumberPadButtonOuterCircleDiameter;
+ (double)pinLongNumericEntryFieldBottomYDistanceFromNumberPadTopButton;
+ (double)pinAlphanumericEntryFieldBottomYDistanceFromKeyboard;
+ (id)pinKeypadStatusTitleViewTitleFont;
+ (id)pinKeypadStatusSubtitleViewTitleFont;
+ (double)pinKeypadEntryFieldOffsetForSubtitle;
+ (double)pinKeypadStatusTitleBaselineOffsetFromTitle;
+ (double)pinKeypadStatusTitleExtraOffsetIncludingSubtitle;
+ (double)pinKeypadStatusSubtitleTitleExtraOffset;
+ (double)pinKeypadStatusTitleBaselineOffsetFromEntryFieldIncludingSubtitle;
+ (double)pinKeyboardEntryFieldOffset:(BOOL)a0;

@end
