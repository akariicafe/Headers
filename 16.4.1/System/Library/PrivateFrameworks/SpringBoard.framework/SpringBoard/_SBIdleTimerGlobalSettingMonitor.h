@class NSString;
@protocol _SBIdleTimerGlobalSettingMonitorDelegate;

@interface _SBIdleTimerGlobalSettingMonitor : NSObject

@property (readonly, copy, nonatomic) NSString *label;
@property (weak, nonatomic) id<_SBIdleTimerGlobalSettingMonitorDelegate> delegate;

- (BOOL)_updateCache;
- (id)formattedValue;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 delegate:(id)a1;

@end
