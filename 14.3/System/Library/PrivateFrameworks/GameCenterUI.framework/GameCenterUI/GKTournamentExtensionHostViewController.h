@class GKTournamentViewRequest, NSString;

@interface GKTournamentExtensionHostViewController : GKExtensionHostViewController <GKTournamentExtensionInterface, GKTournamentHostInterface>

@property (readonly, nonatomic) GKTournamentViewRequest *viewRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

@end
