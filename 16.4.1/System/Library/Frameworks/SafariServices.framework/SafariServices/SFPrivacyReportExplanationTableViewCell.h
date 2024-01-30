@class NSString, UITextView;
@protocol SFPrivacyReportExplanationTableViewCellDelegate;

@interface SFPrivacyReportExplanationTableViewCell : UITableViewCell <UITextViewDelegate> {
    UITextView *_textLabel;
    BOOL _wideLayout;
}

@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) id<SFPrivacyReportExplanationTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (void)_toggleExpanded:(id)a0;
- (void)privacyProxyStateChanged:(id)a0;

@end
