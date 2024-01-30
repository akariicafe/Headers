@class NSString, NSXPCConnection;

@interface NFMWhereIsMyCompanionConnection : NSObject <NFMWhereIsMyCompanionConnectionProtocol>

@property (retain) NSXPCConnection *serverConnection;
@property (copy, nonatomic) id /* block */ playSoundCompletion;
@property (copy, nonatomic) id /* block */ playSoundAndLEDCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDeviceConnection;

- (id)init;
- (void).cxx_destruct;
- (void)applicationIdentifierWithReply:(id /* block */)a0;
- (void)playSoundAndLightsOnCompanionWithCompletion:(id /* block */)a0;
- (void)playSoundOnCompanionWithCompletion:(id /* block */)a0;
- (void)playedSound:(BOOL)a0;
- (void)playedSoundAndLED:(BOOL)a0;

@end
