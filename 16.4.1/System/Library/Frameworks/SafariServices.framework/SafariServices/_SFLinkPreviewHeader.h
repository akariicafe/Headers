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

- (void)fluidProgressViewDidShowProgress:(id)a0;
- (double)defaultHeight;
- (void)fluidProgressViewWillShowProgress:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithMinimumPreviewUI:(BOOL)a0;
- (BOOL)linkPreviewEnabled;
- (void)linkPreviewHeaderContentView:(id)a0 didEnableLinkPreview:(BOOL)a1;

@end
