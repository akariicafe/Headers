@class SBWImageSlot, NSString, UIImageView;

@interface SBWImageSlotView : UIView <SBWDeferredImageSlotObserving> {
    UIImageView *_imageView;
}

@property (retain, nonatomic) SBWImageSlot *imageSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_pointSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)deferredImageSlot:(id)a0 didUpdateImage:(id)a1;
- (void)_updateWithImage:(id)a0;

@end
