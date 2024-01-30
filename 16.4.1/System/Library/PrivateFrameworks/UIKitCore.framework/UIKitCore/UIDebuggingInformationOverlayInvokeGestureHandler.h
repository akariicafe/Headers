@class NSString;

@interface UIDebuggingInformationOverlayInvokeGestureHandler : NSObject <UIGestureRecognizerDelegate> {
    BOOL _didCreateTools;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainHandler;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_handleActivationGesture:(id)a0;

@end
