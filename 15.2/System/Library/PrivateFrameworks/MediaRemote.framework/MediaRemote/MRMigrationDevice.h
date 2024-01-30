@class MRNowPlayingPlayerResponse, MRQHONowPlayingController, NSString, NSError, NSObject, MRAVEndpoint;
@protocol OS_dispatch_queue, MRMigrationDeviceDelegate;

@interface MRMigrationDevice : NSObject <MRQHONowPlayingControllerDelegate>

@property (retain, nonatomic) MRQHONowPlayingController *controller;
@property (nonatomic) unsigned long long deviceState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSError *prepareError;
@property (nonatomic) BOOL preparedForAirPlay;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) MRAVEndpoint *endpoint;
@property (readonly, nonatomic) BOOL isPrepared;
@property (readonly, nonatomic) MRNowPlayingPlayerResponse *playerState;
@property (weak, nonatomic) id<MRMigrationDeviceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proactiveDevice;

- (void)controllerWillReloadForInvalidation:(id)a0;
- (id)initWithUID:(id)a0;
- (void)prepare;
- (void)controller:(id)a0 didUpdateResponse:(id)a1;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void).cxx_destruct;
- (void)_checkIfAirPlayPossible;
- (void)_notifyDelegateOfStateChange;
- (void)_notifyDelegateOfPlayerStateChange;
- (void)controller:(id)a0 didFailWithError:(id)a1;
- (id)dictionaryRepresentation;

@end
