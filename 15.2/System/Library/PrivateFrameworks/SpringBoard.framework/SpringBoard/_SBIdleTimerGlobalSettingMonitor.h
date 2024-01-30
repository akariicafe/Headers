@class NSString;
@protocol _SBIdleTimerGlobalSettingMonitorDelegate;

@interface _SBIdleTimerGlobalSettingMonitor : NSObject

@property (readonly, copy, nonatomic) NSString *label;
@property (weak, nonatomic) id<_SBIdleTimerGlobalSettingMonitorDelegate> delegate;

- (void).cxx_destruct;
- (id)formattedValue;
- (BOOL)_updateCache;
- (id)initWithLabel:(id)a0 delegate:(id)a1;

@end
