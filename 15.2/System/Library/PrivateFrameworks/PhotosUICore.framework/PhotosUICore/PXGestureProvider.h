@class NSArray, UIView;
@protocol PXGestureProviderDelegate;

@interface PXGestureProvider : NSObject

@property (readonly, nonatomic) NSArray *gestureRecognizers;
@property (weak, nonatomic) id<PXGestureProviderDelegate> delegate;
@property (weak, nonatomic) UIView *hostingView;

- (void).cxx_destruct;
- (void)hostingViewDidChange;

@end
