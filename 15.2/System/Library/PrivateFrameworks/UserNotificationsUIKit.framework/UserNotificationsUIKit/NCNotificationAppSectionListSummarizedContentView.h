@class NSString, NSArray, UILabel, UIView, UITapGestureRecognizer;
@protocol NCNotificationAppSectionListSummarizedContentViewDelegate;

@interface NCNotificationAppSectionListSummarizedContentView : NCNotificationListBaseContentView {
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_countBackgroundView;
    UIView *_backgroundView;
    NSArray *_titleAndContentStringLabels;
    UIView *_attachmentImageBoundingView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (weak, nonatomic) id<NCNotificationAppSectionListSummarizedContentViewDelegate> delegate;
@property (nonatomic) unsigned long long count;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *titleAndContentStrings;
@property (copy, nonatomic) NSArray *attachmentImageViews;

- (void)_layoutTitleLabel;
- (void)layoutSubviews;
- (void)handleTap:(id)a0;
- (void)_configureBackgroundViewIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForTitleLabel;
- (void)_updateTextAttributesForCountLabel;
- (id)_newContentStringLabelForText:(id)a0;
- (void)_updateTextAttributesForTitleAndContentStringLabels;
- (double)_countBackgroundDimensionInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_allowedWidthForTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForTitleTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_numberOfLinesForContentTextInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureTapGestureRecognizerIfNecessary;
- (void)_layoutBackgroundView;
- (void)_layoutCountLabel;
- (void)_layoutAttachmentImageViews;
- (void)_layoutTitleAndContentStringLabels;
- (void)_configureShadowForAttachmentView:(id)a0;
- (unsigned long long)_maximumNumberOfLinesForTitleText;
- (unsigned long long)_maximumNumberOfLinesForContentText;

@end
