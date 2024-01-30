@class PXVideoSession, PXVideoSessionUIView;
@protocol NSCopying;

@interface PXGVideoPlayerView : UIView <PXGReusableView>

@property (retain, nonatomic) PXVideoSession *videoSession;
@property (readonly, nonatomic) PXVideoSessionUIView *videoSessionView;
@property (copy, nonatomic) id<NSCopying> userData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } clippingRect;
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;

- (void)becomeReusable;
- (void)prepareForReuse;
- (id)init;
- (void).cxx_destruct;

@end
