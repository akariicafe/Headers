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

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)biometricResource:(id)a0 observeEvent:(unsigned long long)a1;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_forEachObserver:(id /* block */)a0;
- (void)device:(id)a0 pearlEventOccurred:(long long)a1;
- (void)device:(id)a0 pearlStateChanged:(long long)a1;
- (id)initWithPearlDevice:(id)a0;
- (void)_setMatching:(BOOL)a0;
- (void)_setFaceDetecting:(BOOL)a0;
- (void)_setPoseIsMarginal:(BOOL)a0;
- (void)_updateFaceDetecting;
- (void)_updateMatching;

@end
