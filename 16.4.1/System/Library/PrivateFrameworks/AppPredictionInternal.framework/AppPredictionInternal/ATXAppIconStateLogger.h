@class NSString;

@interface ATXAppIconStateLogger : NSObject <ATXPeriodicLoggerSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0;
- (id)getMetrics;

@end
