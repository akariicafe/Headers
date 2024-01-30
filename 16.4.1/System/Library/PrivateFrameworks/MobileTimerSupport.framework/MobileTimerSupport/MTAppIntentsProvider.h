@class _TtC18MobileTimerSupport19MTAppIntentsManager;
@protocol MTAppIntentsProviderDelegate;

@interface MTAppIntentsProvider : NSObject <MobileTimerSupport.MTAppIntentsManagerDelegate>

@property (retain, nonatomic) _TtC18MobileTimerSupport19MTAppIntentsManager *manager;
@property (weak, nonatomic) id<MTAppIntentsProviderDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)didSelectTabWithManager:(id)a0 tab:(long long)a1;

@end
