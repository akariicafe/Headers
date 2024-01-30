@class NSString, UIImageView, UIStackView;

@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate> {
    UIStackView *_stackView;
    UIImageView *_imageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void).cxx_destruct;
- (void)_setConstraints;
- (id)aggregatedDetailsFor:(id)a0;
- (id)customBodyTextView;
- (void)configureWithIncident:(id)a0;
- (void)configureWithNotice:(id)a0;
- (id)initWithReuseIdentifier:(id)a0;

@end
