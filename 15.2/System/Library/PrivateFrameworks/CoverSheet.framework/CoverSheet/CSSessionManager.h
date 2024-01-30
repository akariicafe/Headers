@class SBLockScreenDefaults, CSWidgetMetricsProvider;
@protocol CSItemDestination;

@interface CSSessionManager : NSObject

@property (retain, nonatomic) id<CSItemDestination> itemDestination;
@property (retain, nonatomic) SBLockScreenDefaults *lockScreenDefaults;
@property (weak, nonatomic) CSWidgetMetricsProvider *widgetMetricsProvider;

- (id)initWithItemDestination:(id)a0;
- (void).cxx_destruct;
- (void)addSession;
- (void)removeSession;

@end
