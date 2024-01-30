@class NSString, MRArtwork, INPlayMediaIntent;

@interface MRMediaSuggestion : NSObject

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) MRArtwork *artwork;
@property (retain, nonatomic) INPlayMediaIntent *intent;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *artist;

- (void).cxx_destruct;
- (id)_processedIntent;
- (void)_playIntent:(id)a0 completion:(id /* block */)a1;
- (BOOL)_originatedFromSystemMediaApp;
- (void)_playIntent:(id)a0 onEndpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)_playIntentRemotelyWithAirPlay:(id)a0 destinationDevices:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)playWithCompletion:(id /* block */)a0;
- (void)_playIntentRemotelyAsPlaybackQueue:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)_intentForQueuePlayback;
- (id)_identifierForQueuePlayback;
- (void)_confirmIntent:(id)a0 intentHandler:(id /* block */)a1;
- (void)_handleIntentWithProxy:(id)a0 completion:(id /* block */)a1;
- (void)playOnDeviceWithUID:(id)a0 completion:(id /* block */)a1;
- (void)playOnEndpoint:(id)a0 completion:(id /* block */)a1;
- (void)_updateActiveEndpointAndPlayIntent:(id)a0 endpoint:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)hash;
- (id)_callbackQueue;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIntent:(id)a0;

@end
