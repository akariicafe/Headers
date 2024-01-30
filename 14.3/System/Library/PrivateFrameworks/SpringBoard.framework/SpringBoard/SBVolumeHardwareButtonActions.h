@class NSHashTable;

@interface SBVolumeHardwareButtonActions : NSObject {
    BOOL _volumeIncreaseIsDown;
    BOOL _volumeDecreaseIsDown;
    NSHashTable *_volumePressBandits;
    id /* block */ _volumeIncreaseUpEventBlock;
    id /* block */ _volumeDecreaseUpEventBlock;
}

- (void).cxx_destruct;
- (void)cancelVolumePress;
- (void)addVolumePressBandit:(id)a0;
- (void)removeVolumePressBandit:(id)a0;
- (void)volumeIncreasePressDownWithModifiers:(long long)a0;
- (void)volumeIncreasePressUp;
- (void)volumeDecreasePressDownWithModifiers:(long long)a0;
- (void)volumeDecreasePressUp;
- (BOOL)_handleVolumeButtonDownForIncrease:(BOOL)a0 modifiers:(long long)a1;
- (BOOL)_handleVolumeButtonUpForIncrease:(BOOL)a0;
- (BOOL)_handleVolumeIncreaseUp;
- (BOOL)_handleVolumeDecreaseUp;
- (BOOL)_sendVolumeButtonToSBUIControllerForIncrease:(BOOL)a0 down:(BOOL)a1;
- (void)_launchVolumeSettings;
- (void)_sendBanditsVolumeIncreased;
- (void)_sendBanditsVolumeDecreased;
- (BOOL)_sendVolumeButtonDownToSpringBoardInternalUIForIncrease:(BOOL)a0;
- (BOOL)_sendVolumeButtonDownToLegacyRegisteredClientsForIncrease:(BOOL)a0;
- (BOOL)_sendVolumeButtonDownToSBUIControllerForIncrease:(BOOL)a0;

@end
