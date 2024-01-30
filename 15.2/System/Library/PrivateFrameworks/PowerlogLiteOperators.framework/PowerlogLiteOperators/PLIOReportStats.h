@class NSString, NSDictionary, NSDate;

@interface PLIOReportStats : NSObject

@property (retain) NSString *driverName;
@property (retain) NSDictionary *ioReportSample;
@property (retain) NSDate *sampleTime;
@property (retain) NSDate *sampleTimePrevious;
@property struct __IOReportSubscriptionCF { } *subscription;
@property (retain) NSDictionary *subscribedChannels;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)dealloc;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1;
- (id)getCurrentStats;
- (id)initWithDriverName:(id)a0 withGroup:(id)a1;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)currentValueForSimpleChannel:(id)a0;
- (BOOL)updateStats;
- (double)getSampleDuration;
- (id)parseSimpleDeltaSample;
- (id)deltaValueForStateChannel:(id)a0 atIndex:(int)a1;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (void)clearSubscription;
- (BOOL)updateStatsWithBlock:(id /* block */)a0;
- (id)getDeltaStats;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1;
- (id)parseSimpleIOReportSample;
- (id)deltaValueForSimpleChannel:(id)a0;
- (id)currentValueForStateChannel:(id)a0 atIndex:(int)a1;

@end
