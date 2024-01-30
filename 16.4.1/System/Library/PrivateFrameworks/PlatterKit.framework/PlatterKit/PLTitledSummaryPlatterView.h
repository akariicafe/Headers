@class NSString, UIImage, UIView, PLSummaryContentView;

@interface PLTitledSummaryPlatterView : PLTitledPlatterView <PLSummaryPlatter> {
    PLSummaryContentView *_summaryContentView;
}

@property (retain, nonatomic) NSString *primaryText;
@property (retain, nonatomic) NSString *primarySubtitleText;
@property (retain, nonatomic) NSString *secondaryText;
@property (retain, nonatomic) NSString *summaryText;
@property (retain, nonatomic) UIImage *thumbnail;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (readonly, nonatomic) UIView *customContentView;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)adjustsFontForContentSizeCategory;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBackgroundView:(id)a0;
- (void)_configureSummaryContentViewIfNecessary;
- (void)layoutSubviews;
- (void)setAdjustsFontForContentSizeCategory:(BOOL)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_layoutSummaryContentView;

@end
