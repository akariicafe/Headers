@interface CMMagicMountManager : NSObject {
    id _internal;
}

@property (readonly, nonatomic) struct CMMagicMountStateStruct { double x0; BOOL x1; } currentMagicMountState;

+ (BOOL)isAvailable;

- (id)initPrivate;
- (void)dealloc;
- (void)deallocPrivate;
- (id)init;
- (void)feedMounted:(BOOL)a0 apAwake:(BOOL)a1 simulated:(BOOL)a2 timestamp:(double)a3;
- (void)onMagicMountData:(const struct MagicMountState { double x0; BOOL x1; BOOL x2; BOOL x3; } *)a0;
- (void)sendMagicMountStateToClientPrivate;
- (void)setNextUnmountAPWakeAllowed:(BOOL)a0;
- (void)setNextUnmountAPWakeAllowedPrivate:(BOOL)a0;
- (void)startMagicMountUpdatesPrivateToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)startMagicMountUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopMagicMountUpdates;
- (void)stopMagicMountUpdatesPrivate;

@end
