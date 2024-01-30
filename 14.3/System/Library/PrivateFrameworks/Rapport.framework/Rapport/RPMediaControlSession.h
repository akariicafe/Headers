@class NSObject;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPMediaControlSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _invalidateCalled;
    BOOL _registeredMediaControlInterest;
}

@property (readonly, nonatomic) unsigned long long mediaControlFlags;
@property (copy, nonatomic) id /* block */ mediaControlFlagsChangedHandler;
@property (retain, nonatomic) id<RPMessageable> messenger;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void)invalidate;
- (void)_handleMediaControlEvent:(id)a0;
- (void)mediaCaptionSettingGetFromDestinationID:(id)a0 completion:(id /* block */)a1;
- (void)mediaCaptionSettingSet:(int)a0 destinationID:(id)a1 completion:(id /* block */)a2;
- (void)mediaCommand:(int)a0 destinationID:(id)a1 completion:(id /* block */)a2;
- (void)mediaSkipBySeconds:(double)a0 destinationID:(id)a1 completion:(id /* block */)a2;
- (void)mediaGetVolumeFromDestinationID:(id)a0 completion:(id /* block */)a1;
- (void)mediaSetVolume:(double)a0 destinationID:(id)a1 completion:(id /* block */)a2;

@end
