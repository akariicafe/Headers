@class NSArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface MediaControlsHardwareVolumeManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly, nonatomic) MediaControlsHardwareVolumeManager *sharedInstance;

@property (retain, nonatomic) NSMapTable *assertions;
@property (retain, nonatomic) NSArray *volumeButtonConsumerInvalidators;

- (id)init;
- (void).cxx_destruct;
- (void)unregisterClient:(id)a0;
- (void)registerClient:(id)a0 forRoute:(id)a1;
- (void)_updateVolumeControlsForRoute:(id)a0;
- (void)_relinquishHardwareVolumeButtons;
- (void)_requestHardwareVolumeButtons;
- (id)requestVolumeControlsForRoute:(id)a0 reason:(id)a1;

@end
