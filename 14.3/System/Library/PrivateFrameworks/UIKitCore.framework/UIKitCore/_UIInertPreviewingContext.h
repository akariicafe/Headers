@class UIGestureRecognizer, NSString, UIView;
@protocol UIViewControllerPreviewingDelegate;

@interface _UIInertPreviewingContext : NSObject <UIViewControllerPreviewing_Internal> {
    UIGestureRecognizer *_failureRelationshipGestureRecognizer;
}

@property (retain, nonatomic) UIView *sourceView;
@property (weak, nonatomic) id<UIViewControllerPreviewingDelegate> delegate;
@property (retain, nonatomic) UIView *customViewForInteractiveHighlight;
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
