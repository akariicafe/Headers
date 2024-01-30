@class NSString, NSTimeZone, NSDate;

@interface _ATXAppLaunch : NSObject <ATXLaunchEventProtocol, ATXTimedEventProtocol>

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventTime;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 reason:(id)a4;
- (BOOL)isEqualToLaunch:(id)a0;

@end
