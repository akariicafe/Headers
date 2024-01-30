@interface CMAudioAccessoryManager : NSObject {
    id _internal;
}

@property (nonatomic, setter=_setAudioAccessoryAccelerometerUpdateInterval:) double _audioAccessoryAccelerometerUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryAccelerometerAvailable) BOOL _audioAccessoryAccelerometerAvailable;
@property (nonatomic, setter=_setAudioAccessoryGyroUpdateInterval:) double _audioAccessoryGyroUpdateInterval;
@property (readonly, nonatomic, getter=_isAudioAccessoryGyroAvailable) BOOL _audioAccessoryGyroAvailable;
@property (readonly, nonatomic, getter=_isAudioAccessoryDeviceMotionAvailable) BOOL _audioAccessoryDeviceMotionAvailable;
@property (nonatomic, setter=_setAudioAccessoryDeviceMotionUpdateInterval:) double _audioAccessoryDeviceMotionUpdateInterval;

+ (BOOL)_isAvailable;
+ (BOOL)_selectActiveAudioRouteWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForAccelerometerWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForGyroWithBTAddress:(id)a0 modelID:(id)a1;
+ (BOOL)_selectActiveAudioRouteForDeviceMotionWithBTAddress:(id)a0 modelID:(id)a1;

- (id)initPrivate;
- (id)init;
- (void)dealloc;
- (void)onAudioAccessoryAccelerometer:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; unsigned short x3; } *)a0;
- (void)onAudioAccessoryGyro:(const struct Sample { double x0; struct { float x0; float x1; float x2; } x1; unsigned long long x2; unsigned short x3; float x4; } *)a0;
- (void)onAudioAccessoryDeviceMotion:(const struct AudioAccessorySample { struct { struct CMOQuaternion { float x0[4]; } x0; struct CMVector<float, 3> { float x0[3]; } x1; struct CMVector<float, 3> { float x0[3]; } x2; struct CMVector<float, 3> { float x0[3]; } x3; struct Status { unsigned short x0; } x4; } x0; unsigned long long x1; double x2; double x3; struct CMVector<float, 3> { float x0[3]; } x4; float x5; int x6; unsigned int x7; int x8; int x9; unsigned long long x10; double x11; } *)a0;
- (void)onAudioAccessoryDeviceMotionConfig:(const struct Config { int x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; int x3; struct CMOQuaternion { float x0[4]; } x4; } *)a0;
- (void)onAudioAccessoryDeviceMotionStatus:(const int *)a0;
- (void)_setAudioAccessoryAccelerometerUpdateIntervalPrivate:(double)a0;
- (void)_isAudioAccessoryAccelerometerAvailablePrivate;
- (void)_startAudioAccessoryAccelerometerUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryAccelerometerUpdatesPrivate;
- (void)_setAudioAccessoryGyroUpdateIntervalPrivate:(double)a0;
- (void)_isAudioAccessoryGyroAvailablePrivate;
- (void)_startAudioAccessoryGyroUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryGyroUpdatesPrivate;
- (void)_isAudioAccessoryDeviceMotionAvailablePrivate;
- (void)_setAudioAccessoryDeviceMotionUpdateIntervalPrivate:(double)a0;
- (void)_stopAudioAccessoryDeviceMotionUpdatesPrivate;
- (void)_startAudioAccessoryDeviceMotionUpdatesPrivate:(id)a0 lowLatencyMode:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesPrivate:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdatesPrivate;
- (double)_audioAccessoryAccelerometerUpdateInterval;
- (id)_audioAccessoryGyroData;
- (id)_audioAccessoryAccelerometerData;
- (void)_startAudioAccessoryAccelerometerUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryAccelerometerUpdates;
- (double)_audioAccessoryGyroUpdateInterval;
- (void)_startAudioAccessoryGyroUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryGyroUpdates;
- (double)_audioAccessoryDeviceMotionUpdateInterval;
- (void)_startAudioAccessoryDeviceMotionUpdatesToQueue:(id)a0 lowLatencyMode:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)_stopAudioAccessoryDeviceMotionUpdates;
- (void)_startAudioAccessoryDeviceMotionStatusUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)_stopAudioAccessoryDeviceMotionStatusUpdates;
- (void)deallocPrivate;

@end
