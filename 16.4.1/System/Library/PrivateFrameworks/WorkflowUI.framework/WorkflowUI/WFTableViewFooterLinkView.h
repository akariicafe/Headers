@class NSString, UITextView, NSURL;
@protocol WFTableViewFooterLinkViewDelegate;

@interface WFTableViewFooterLinkView : UITableViewHeaderFooterView <UITextViewDelegate>

@property (readonly, nonatomic) UITextView *textView;
@property (weak, nonatomic) id<WFTableViewFooterLinkViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } linkRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)tintColorDidChange;
- (id)initWithReuseIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)updateLinkColor;
- (void)setText:(id)a0 URL:(id)a1;
- (void)setText:(id)a0 URL:(id)a1 linkRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
