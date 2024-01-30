@class NSHashTable;

@interface SBVolumeHardwareButtonActions : NSObject {
    BOOL _volumeIncreaseIsDown;
    BOOL _volumeDecreaseIsDown;
    NSHashTable *_volumePressBandits;
    id /* block */ _volumeIncreaseUpEventBlock;
    id /* block */ _volumeDecreaseUpEventBlock;
}

- (void).cxx_destruct;
- (BOOL)_handleVolumeButtonDownForIncrease:(BOOL)a0 modifiers:(long long)a1;
- (BOOL)_handleVolumeButtonUpForIncrease:(BOOL)a0;
- (BOOL)_handleVolumeDecreaseUp;
- (BOOL)_handleVolumeIncreaseUp;
- (void)_launchVolumeSettings;
- (void)_sendBanditsVolumeDecreased;
- (void)_sendBanditsVolumeIncreased;
- (id)_sendVolumeButtonDownToLegacyRegisteredClientsForIncrease:(BOOL)a0;
- (id)_sendVolumeButtonDownToSBUIControllerForIncrease:(BOOL)a0;
- (id)_sendVolumeButtonDownToSpringBoardInternalUIForIncrease:(BOOL)a0;
- (BOOL)_sendVolumeButtonToSBUIControllerForIncrease:(BOOL)a0 down:(BOOL)a1;
- (void)addVolumePressBandit:(id)a0;
- (void)cancelVolumePress;
- (void)removeVolumePressBandit:(id)a0;
- (void)volumeDecreasePressDownWithModifiers:(long long)a0;
- (void)volumeDecreasePressUp;
- (void)volumeIncreasePressDownWithModifiers:(long long)a0;
- (void)volumeIncreasePressUp;

@end
