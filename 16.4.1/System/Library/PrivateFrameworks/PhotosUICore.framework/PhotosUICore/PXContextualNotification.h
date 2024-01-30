@class UIView, NSString, UIImage, PXContextualNotificationCenter, NSValue, UIWindow, PXImageRequester, PXContextualNotificationView, AVVideoComposition, AVAsset;
@protocol PXContextualNotificationDelegate;

@interface PXContextualNotification : NSObject {
    struct { BOOL containingFrameInCoordinateSpace; BOOL preferredContainerView; BOOL preferredAnimation; BOOL shouldPassthroughPointInCoordinateSpace; BOOL wasTapped; BOOL wasDiscarded; BOOL didAppear; BOOL didDisappear; } _delegateRespondsTo;
}

@property (nonatomic) long long appearanceState;
@property (weak, nonatomic) PXContextualNotificationCenter *contextualNotificationCenter;
@property (retain, nonatomic) PXContextualNotificationView *view;
@property (nonatomic) struct PXContextualNotificationVisualState { BOOL onscreen; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containingFrame; double verticalOffset; double alpha; } nextState;
@property (nonatomic) struct PXContextualNotificationVisualState { BOOL onscreen; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containingFrame; double verticalOffset; double alpha; } appliedState;
@property (nonatomic) long long animationCount;
@property (retain, nonatomic) NSValue *releaseVelocity;
@property (nonatomic) double panInitialVerticalOffset;
@property (readonly, nonatomic) UIView *preferredContainerView;
@property (readonly, nonatomic) long long preferredAnimation;
@property (weak, nonatomic) id<PXContextualNotificationDelegate> delegate;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleIcon;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) AVAsset *loopingVideoAsset;
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) UIWindow *window;

- (void)dismiss;
- (void)present;
- (void)invalidateLayout;
- (id)init;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containingFrameInContainerView:(id)a0;
- (void)handleDiscard;
- (BOOL)shouldPassthroughPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;

@end
