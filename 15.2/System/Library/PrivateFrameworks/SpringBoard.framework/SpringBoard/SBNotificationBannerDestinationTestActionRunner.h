@class NSString;

@interface SBNotificationBannerDestinationTestActionRunner : NSObject <NCNotificationActionRunner>

@property (nonatomic) BOOL shouldForwardAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeAction:(id)a0 fromOrigin:(id)a1 endpoint:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;

@end
