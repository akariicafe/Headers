@class NSString;
@protocol NSObject;

@interface CNKeyboardStateMonitor : NSObject <CNKeyboardStateMonitor>

@property (class, readonly) CNKeyboardStateMonitor *sharedMonitor;

@property long long keyboardState;
@property (retain, nonatomic) id<NSObject> didShowObserver;
@property (retain, nonatomic) id<NSObject> didHideObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
