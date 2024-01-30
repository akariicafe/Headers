@class NSString;

@interface CPAnalyticsDevLogger : NSObject <CPAnalyticsDestination>

@property (readonly, nonatomic) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0 cpAnalyticsInstance:(id)a1;
- (void)processEvent:(id)a0;
- (void)updateWithConfig:(id)a0;

@end
