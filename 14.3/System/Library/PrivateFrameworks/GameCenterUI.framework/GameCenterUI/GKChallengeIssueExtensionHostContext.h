@class NSString, GKGame;

@interface GKChallengeIssueExtensionHostContext : GKExtensionHostContext <GKChallengeIssueHostProtocol>

@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;


@end
