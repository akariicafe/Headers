@class UIStackView, NSString, UIImage, ASCredentialRequestPaneViewController, ASCredentialRequestInfoLabelSubPane;

@interface ASCredentialRequestPaneContext : NSObject {
    long long _iconStyle;
    NSString *_title;
    long long _titleStyle;
    UIImage *_icon;
    ASCredentialRequestInfoLabelSubPane *_subtitleSubPane;
    long long _subtitleStyle;
}

@property (readonly, weak, nonatomic) ASCredentialRequestPaneViewController *paneViewController;
@property (readonly, nonatomic) UIStackView *stackView;

- (void).cxx_destruct;
- (void)addEmptyViewWithSpacing:(double)a0;
- (id)initWithPaneViewController:(id)a0 stackView:(id)a1;
- (double)_boldTitle_customSpacingAfterTitle;
- (double)_boldTitle_stackViewTopSpacing;
- (double)_customSpacingAfterIcon;
- (double)_customSpacingAfterSubtitle;
- (double)_customSpacingAfterTitle;
- (double)_stackViewTopSpacing;
- (BOOL)_useBoldTitleLayout;
- (void)addIcon:(id)a0 iconStyle:(long long)a1 title:(id)a2 titleStyle:(long long)a3 subtitlePane:(id)a4 subtitleStyle:(long long)a5 subtitleBottomSpacing:(id)a6;
- (void)addSubPane:(id)a0 withCustomSpacingAfter:(double)a1;

@end
