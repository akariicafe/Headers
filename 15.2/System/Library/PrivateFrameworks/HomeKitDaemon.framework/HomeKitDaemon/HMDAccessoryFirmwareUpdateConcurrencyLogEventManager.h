@class NSMutableArray, NSMutableDictionary;

@interface HMDAccessoryFirmwareUpdateConcurrencyLogEventManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *currentActivity;
@property (retain, nonatomic) NSMutableArray *peakActivity;
@property (retain, nonatomic) NSMutableDictionary *inProgress;

- (void).cxx_destruct;
- (id)init;
- (void)startStagingWithAccessory:(id)a0;
- (void)startApplyWithAccessory:(id)a0;
- (void)stopStagingWithAccessory:(id)a0;
- (void)stopApplyWithAccessory:(id)a0;
- (void)startWithCategory:(unsigned long long)a0 accessory:(id)a1;
- (void)stopWithCategory:(unsigned long long)a0 accessory:(id)a1;
- (unsigned long long)differenceFromCounterWithCategory:(unsigned long long)a0;
- (void)submitLogEvent;

@end
