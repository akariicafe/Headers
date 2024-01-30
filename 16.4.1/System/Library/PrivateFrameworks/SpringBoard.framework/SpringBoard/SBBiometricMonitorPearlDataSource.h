@class NSString, BKDevicePearl, NSHashTable;

@interface SBBiometricMonitorPearlDataSource : NSObject <BKDevicePearlDelegate, SBUIBiometricResourceObserver, SBBiometricMonitorDataSource> {
    BKDevicePearl *_pearlDevice;
    NSHashTable *_observers;
    BOOL _matching;
    BOOL _faceDetecting;
    BOOL _poseIsMarginal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL presenceDetectRunning;
@property (readonly, nonatomic) BOOL matchRunning;
@property (readonly, nonatomic) BOOL poseIsMarginal;

- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (void)addObserver:(id)a0;
- (void)device:(id)a0 pearlEventOccurred:(long long)a1;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)device:(id)a0 pearlStateChanged:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_forEachObserver:(id /* block */)a0;
- (void)_updateMatching;
- (void)_setFaceDetecting:(BOOL)a0;
- (void)_setMatching:(BOOL)a0;
- (void)_setPoseIsMarginal:(BOOL)a0;
- (void)_updateFaceDetecting;
- (id)initWithPearlDevice:(id)a0;

@end
