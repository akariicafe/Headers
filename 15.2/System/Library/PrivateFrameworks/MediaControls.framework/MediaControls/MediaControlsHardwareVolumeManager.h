@class NSArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface MediaControlsHardwareVolumeManager : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly, nonatomic) MediaControlsHardwareVolumeManager *sharedInstance;

@property (retain, nonatomic) NSMapTable *assertions;
@property (retain, nonatomic) NSArray *volumeButtonConsumerInvalidators;

- (void)unregisterClient:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)requestVolumeControlsForRoute:(id)a0 reason:(id)a1;
- (void)registerClient:(id)a0 forRoute:(id)a1;
- (void)_updateVolumeControlsForRoute:(id)a0;
- (void)_requestHardwareVolumeButtons;
- (void)_relinquishHardwareVolumeButtons;

@end
