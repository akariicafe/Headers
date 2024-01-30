@class CMKappaInternal;

@interface CMKappa : NSObject

@property (readonly, nonatomic) CMKappaInternal *_internal;

+ (BOOL)areStatsAvailable;

- (id)init;
- (int)getState;
- (void)dealloc;
- (void)sendCmd:(int)a0;
- (void)sendAPCmd:(int)a0;
- (void)startKappaUpdatesForItem:(long long)a0 withHandler:(id /* block */)a1;
- (void)stopKappaUpdates;
- (void)sendConfigNumFastAccel:(int)a0 andNumAccel:(int)a1 andNumPressure:(int)a2 andNumDeviceMotion:(int)a3 andTimeout:(int)a4;
- (void)sendAPConfigNumFastAccel:(int)a0 andNumAccel:(int)a1 andNumPressure:(int)a2 andNumDeviceMotion:(int)a3 andTimeout:(int)a4;

@end
