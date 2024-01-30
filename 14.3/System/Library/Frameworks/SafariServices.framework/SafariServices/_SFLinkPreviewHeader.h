@class _SFFluidProgressView, NSString, SFLinkPreviewHeaderContentView, UIView;
@protocol _SFLinkPreviewHeaderDelegate;

@interface _SFLinkPreviewHeader : UIView <SFLinkPreviewHeaderContentViewDelegate, _SFFluidProgressViewDelegate> {
    SFLinkPreviewHeaderContentView *_contentView;
    UIView *_hairline;
    BOOL _isMinimumPreviewUI;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutBounds;
}

@property (weak, nonatomic) id<_SFLinkPreviewHeaderDelegate> delegate;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) _SFFluidProgressView *progressView;
@property (nonatomic, getter=isLinkPreviewEnabled) BOOL linkPreviewEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)defaultHeight;
- (void).cxx_destruct;
- (BOOL)linkPreviewEnabled;
- (void)fluidProgressViewDidShowProgress:(id)a0;
- (void)fluidProgressViewWillShowProgress:(id)a0;
- (void)linkPreviewHeaderContentView:(id)a0 didEnableLinkPreview:(BOOL)a1;
- (void)layoutSubviews;
- (id)initWithMinimumPreviewUI:(BOOL)a0;

@end
