@class NSArray, NSMapTable, NSMutableSet, MPVolumeSlider;

@interface MPVolumeGroupSliderCoordinator : NSObject {
    NSArray *_allSliders;
    NSMutableSet *_individualVolumeSliders;
    MPVolumeSlider *_trackingSlider;
    NSMapTable *_optimisticValues;
    NSMapTable *_optimisticScales;
    int _inFlightDisableOptimisticStateRequests;
    BOOL _shouldOverrideTracking;
}

@property (readonly, nonatomic) MPVolumeSlider *masterVolumeSlider;
@property (readonly, copy, nonatomic) NSArray *individualVolumeSliders;
@property (readonly, nonatomic) BOOL synced;

- (float)_maxOptimisticValue;
- (void)_setControlEventsForVolumeSlider:(id)a0 add:(BOOL)a1;
- (void)_addControlEventsForVolumeSliders:(id)a0;
- (void)syncSliders:(BOOL)a0;
- (void)volumeSliderDidEndTracking:(id)a0;
- (void)removeIndividualVolumeSlider:(id)a0;
- (void)addIndividualVolumeSlider:(id)a0;
- (void)_removeControlEventsForVolumeSliders:(id)a0;
- (void)volumeSliderValueChanged:(id)a0;
- (void)_addControlEventsForVolumeSlider:(id)a0;
- (void)_resetOptimisticScales;
- (void)_updateOptimisticValueCache;
- (void)_removeControlEventsForVolumeSlider:(id)a0;
- (void)_resetMasterVolumeSlider;
- (id)initWithMasterVolumeSlider:(id)a0 individualVolumeSliders:(id)a1;
- (void).cxx_destruct;
- (id)_findExistingVolumeSlider:(id)a0;
- (void)removeAllIndividualVolumeSliders;

@end
