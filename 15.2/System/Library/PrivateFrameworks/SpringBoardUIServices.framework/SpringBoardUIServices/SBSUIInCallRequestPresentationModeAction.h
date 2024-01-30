@class NSString;

@interface SBSUIInCallRequestPresentationModeAction : BSAction

@property (readonly, copy, nonatomic) NSString *analyticsSource;
@property (readonly, nonatomic) long long requestedPresentationMode;
@property (readonly, nonatomic, getter=isUserInitiated) BOOL userInitiated;

- (id)initWithRequestedPresentationMode:(long long)a0 isUserInitiated:(BOOL)a1 analyticsSource:(id)a2 responseHandler:(id /* block */)a3;
- (void)sendCompletionResponseWithSuccess:(BOOL)a0;

@end
