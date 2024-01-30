@class NSString, UIImageView, MTMaterialView;

@interface _FCUIAddActivityControl : UIControl <FCUIContentSizeCategoryAdjusting, MTVisualStylingProviding, UIPointerInteractionDelegate> {
    MTMaterialView *_backgroundMaterialView;
    UIImageView *_glyphImageView;
}

@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithAction:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (void)_configureGlyphImageViewIfNecessary;
- (void)_configureBackgroundMaterialViewIfNecesssary;

@end
