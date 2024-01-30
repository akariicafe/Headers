@class UIPanGestureRecognizer, NSString, UIView;
@protocol _UISheetPresentationInteractionDelegate;

@interface _UISheetPresentationInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic, setter=_setPanGestureRecognizer:) UIPanGestureRecognizer *_panGestureRecognizer;
@property (weak, nonatomic, setter=_setDelegate:) id<_UISheetPresentationInteractionDelegate> _delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
