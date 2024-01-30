@class NSString;

@interface AAUIServerHookHandlerDelegate : NSObject <RUIServerHookHandlerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)serverHookHandler:(id)a0 isUserCancelError:(id)a1;

@end
