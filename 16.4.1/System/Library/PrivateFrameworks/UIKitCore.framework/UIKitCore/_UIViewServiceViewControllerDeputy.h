@class NSString;

@interface _UIViewServiceViewControllerDeputy : _UITargetedProxy <_UIViewServiceDeputy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)XPCInterface;
+ (id)deputyWithViewController:(id)a0;

- (id)invalidate;
- (void)__prepareForDisconnectionWithCompletionHandler:(id /* block */)a0;

@end
