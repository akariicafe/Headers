@class NSString, PXUIFloatingContentView, UIView;

@interface PXPhotosDetailsHeaderPreviewTile : PXUIImageTile <PXUIViewBasicTile> {
    UIView *_containerView;
    PXUIFloatingContentView *_floatingView;
}

@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (readonly, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
