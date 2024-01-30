@class NSString;

@interface _SBSUIRemoteAlertServiceObserverHandle : NSObject <SBSRemoteAlertHandleObserver>

@property (copy, nonatomic) id /* block */ activationHandler;
@property (copy, nonatomic) id /* block */ deactivationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
