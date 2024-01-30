@class UINavigationBar, NSString, UISwipeGestureRecognizer;
@protocol _UINavigationBarGestureHandlerDelegate;

@interface _UINavigationBarGestureHandler : NSObject <UIGestureRecognizerDelegatePrivate> {
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
}

@property (readonly, weak, nonatomic) UINavigationBar *navigationBar;
@property (weak, nonatomic) id<_UINavigationBarGestureHandlerDelegate> delegate;
@property (nonatomic) long long idiom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
