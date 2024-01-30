@class UIStackView, NSString, UIImageView, GEOComposedAdvisoryItem;

@interface MKIncidentExtendedDetailCell : MKTableViewCell <UITextViewDelegate> {
    UIStackView *_stackView;
    UIImageView *_imageView;
    GEOComposedAdvisoryItem *_advisoryItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)_setConstraints;
- (id)customBodyTextView;
- (id)aggregatedDetailsFor:(id)a0;
- (void)configureWithGEORouteIncident:(id)a0;
- (void)configureWithGEOAdvisoryCard:(id)a0;
- (void)configureWithAdvisoryItem:(id)a0;

@end
