@class NSMutableArray, NSMutableDictionary;

@interface HMDAccessoryFirmwareUpdateConcurrencyLogEventManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *currentActivity;
@property (retain, nonatomic) NSMutableArray *peakActivity;
@property (retain, nonatomic) NSMutableDictionary *inProgress;

- (id)init;
- (void).cxx_destruct;
- (void)startWithCategory:(unsigned long long)a0 accessory:(id)a1;
- (void)stopWithCategory:(unsigned long long)a0 accessory:(id)a1;
- (void)stopStagingWithAccessory:(id)a0;
- (void)submitLogEvent;
- (unsigned long long)differenceFromCounterWithCategory:(unsigned long long)a0;
- (void)startStagingWithAccessory:(id)a0;
- (void)startApplyWithAccessory:(id)a0;
- (void)stopApplyWithAccessory:(id)a0;

@end
