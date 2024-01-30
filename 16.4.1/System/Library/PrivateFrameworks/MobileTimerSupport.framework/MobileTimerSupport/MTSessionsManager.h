@class _TtC18MobileTimerSupport18MTSessionsProvider;

@interface MTSessionsManager : NSObject

@property (retain, nonatomic) _TtC18MobileTimerSupport18MTSessionsProvider *provider;

+ (BOOL)supportsSessions;

- (long long)sessionStateForTimer:(id)a0;
- (void)finishSessionWithTimer:(id)a0;
- (BOOL)hasActiveTimerSession;
- (void)updateSessionWithTimer:(id)a0;
- (void)createSessionWithTimer:(id)a0;
- (void)localSetup;
- (id)contextWithTimer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
