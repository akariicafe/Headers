@class NSString;

@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {
    id _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)restrictedProxyForAlertView:(id)a0;

- (id)methodSignatureForSelector:(SEL)a0;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)delegate;
- (void)forwardInvocation:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
