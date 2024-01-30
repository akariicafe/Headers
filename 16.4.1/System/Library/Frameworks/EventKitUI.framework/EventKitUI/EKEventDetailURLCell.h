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

- (void)layoutForWidth:(double)a0 position:(int)a1;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (BOOL)update;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_URLTitleView;
- (id)_URLView;
- (void)_layoutForWidth:(double)a0 position:(int)a1;
- (id)initWithEvent:(id)a0 launchInfo:(id)a1 editable:(BOOL)a2 style:(long long)a3;
- (id)initWithEvent:(id)a0 url:(id)a1 editable:(BOOL)a2 style:(long long)a3;
- (BOOL)updateLink;
- (void)updateLinkWithLaunchInfo;
- (void)updateLinkWithURL;
- (void)updateWithURL:(id)a0 launchInfo:(id)a1;

@end
