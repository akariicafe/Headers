@class UITextView, NSString, NSURL, UILabel, SGSuggestedEventLaunchInfo;

@interface EKEventDetailURLCell : EKEventDetailCell <UITextViewDelegate> {
    UILabel *_URLTitleView;
    UITextView *_URLView;
    int _lastLayoutPosition;
    NSURL *_url;
    SGSuggestedEventLaunchInfo *_launchInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_SGSuggestionsServiceClass;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 url:(id)a1 editable:(BOOL)a2 style:(long long)a3;
- (id)initWithEvent:(id)a0 launchInfo:(id)a1 editable:(BOOL)a2 style:(long long)a3;
- (BOOL)updateLink;
- (void)updateLinkWithURL;
- (void)updateLinkWithLaunchInfo;
- (void)_layoutForWidth:(double)a0 position:(int)a1;
- (id)_URLTitleView;
- (BOOL)update;
- (id)_URLView;
- (void)layoutForWidth:(double)a0 position:(int)a1;
- (void)layoutSubviews;

@end
