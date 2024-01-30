@class CKAggregateAcknowledgmentBalloonView, PXAssetReference, NSString;

@interface CKPhotoGridTapbackView : UIView <PXGDecorationView, CKGradientReferenceView>

@property (retain, nonatomic) CKAggregateAcknowledgmentBalloonView *tapbackBalloonView;
@property (nonatomic) BOOL needsAnimation;
@property (nonatomic) unsigned long long decorationOptions;
@property (copy, nonatomic) PXAssetReference *userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)becomeReusable;
- (Class)balloonViewClass;
- (void)performInsertion:(id /* block */)a0;
- (id)asset;
- (BOOL)invertTail;
- (BOOL)isFromMe;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })gradientFrame;
- (BOOL)shouldAnimate;
- (void).cxx_destruct;
- (id)gradientReferenceView;
- (void)prepareForReuse;
- (void)_tearDownBalloonView;
- (void)_setupBalloonView;
- (id)_imAggregateAcknowledgmentChatItem;

@end
