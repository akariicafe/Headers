@class GKGame, NSString, GKHostedAuthenticateViewController;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol>

@property (weak, nonatomic) GKHostedAuthenticateViewController *delegate;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)dismissAutomaticallyAfterExtensionCompletion;
+ (id)authenticateExtension;

@end
