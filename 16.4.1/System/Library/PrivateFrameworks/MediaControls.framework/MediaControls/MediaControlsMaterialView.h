@class NSString, UIView;

@interface MediaControlsMaterialView : UIView <MTVisualStylingProviding> {
    UIView *_backgroundView;
    UIView *_highlightView;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)visualStylingProviderForCategory:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setContinuousCornerRadius:(double)a0;
- (void).cxx_destruct;

@end
