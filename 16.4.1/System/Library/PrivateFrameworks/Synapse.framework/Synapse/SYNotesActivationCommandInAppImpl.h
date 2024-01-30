@class NSString;

@interface SYNotesActivationCommandInAppImpl : NSObject <SYNotesActivationCommandImpl>

@property (class, copy) id /* block */ fetchPresenterViewControllerInvocationBlock;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_activateWithActivity:(id)a0 completion:(id /* block */)a1;
+ (void)_launchNotesWithUserActivity:(id)a0 completion:(id /* block */)a1;
+ (void)activateWithDomainIdentifier:(id)a0 noteIdentifier:(id)a1 completion:(id /* block */)a2;
+ (void)activateWithMetaActivity:(id)a0 completion:(id /* block */)a1;


@end
