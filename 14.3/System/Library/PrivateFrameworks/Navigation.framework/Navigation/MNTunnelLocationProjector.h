@class NSTimer, NSDate, MNLocation;
@protocol MNTunnelLocationProjectorDelegate;

@interface MNTunnelLocationProjector : NSObject {
    NSTimer *_locationUpdateOverdueTimer;
    MNLocation *_lastLocation;
    NSDate *_lastLocationDate;
    double _locationOverdueTimeoutForTunnel;
    double _locationOverdueTimeoutForNotTunnel;
    double _locationOverdueTimeoutForUnknown;
}

@property (weak, nonatomic) id<MNTunnelLocationProjectorDelegate> delegate;
@property (readonly, nonatomic) BOOL isProjecting;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateLocation:(id)a0;
- (void)stop;
- (double)_approximateMaxSpeedForRoad:(struct { struct { id x0; char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; BOOL x8; unsigned long long x9; float x10; unsigned long long x11; id x12; int x13; } x0; unsigned long long x1; unsigned long long x2; int x3; int x4; int x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; union { struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } x0; struct { float x0; float x1; float x2; float x3; } x1; } x10; struct *x11; struct { unsigned short x0[2]; unsigned short x1[2]; } x12; unsigned char x13; BOOL x14; unsigned char x15; BOOL x16; BOOL x17; unsigned char x18; BOOL x19; unsigned short x20; struct _NSRange { unsigned long long x0; unsigned long long x1; } x21; BOOL x22; unsigned int x23; } *)a0;
- (BOOL)_locationIsGoodEnoughToEndProjection:(id)a0;
- (double)_locationOverdueTimeoutForLocation:(id)a0;
- (void)_resetLocationUpdateOverdueWithTimeout:(double)a0;
- (void)_locationUpdateOverdueTimerFired:(id)a0;
- (id)_projectFromLocation:(id)a0 timeInterval:(double)a1;

@end
