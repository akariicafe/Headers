@class UITextView, NSString, UILabel, UIView, NSLayoutConstraint;
@protocol SFPrivacyReportGridItemDelegate;

@interface SFPrivacyReportExplanationDetailItemView : UIView <SFPrivacyReportGridItem, UITextViewDelegate> {
    UIView *_hairline;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_hairlineTopConstraint;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UITextView *bodyTextView;
@property (nonatomic) double titleLabelTopSpacing;
@property (nonatomic) double hairlineTopSpacing;
@property (nonatomic) BOOL usesInsetStyle;
@property (weak, nonatomic) id<SFPrivacyReportGridItemDelegate> delegate;
@property (nonatomic) unsigned long long gridPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateTopConstraints;
- (void)_updateTopSpacing;

@end
