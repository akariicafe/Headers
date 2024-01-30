@class NSString, NSDictionary, NSDate;

@interface PLIOReportStats : NSObject

@property (retain) NSString *driverName;
@property (retain) NSDictionary *ioReportSample;
@property (retain) NSDate *sampleTime;
@property (retain) NSDate *sampleTimePrevious;
@property struct __IOReportSubscriptionCF { } *subscription;
@property (retain) NSDictionary *subscribedChannels;

- (BOOL)updateStats;
- (id)initWithDriverName:(id)a0 withGroup:(id)a1;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (id)currentValueForStateChannel:(id)a0 atIndex:(int)a1;
- (id)getDeltaStats;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1;
- (id)_init;
- (id)parseSimpleDeltaSample;
- (void)dealloc;
- (id)deltaValueForStateChannel:(id)a0 atIndex:(int)a1;
- (id)getCurrentStats;
- (BOOL)updateStatsWithBlock:(id /* block */)a0;
- (id)init;
- (double)getSampleDuration;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;
- (id)initWithGroup:(id)a0 andSubGroup:(id)a1;
- (id)parseSimpleIOReportSample;
- (void)clearSubscription;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2;
- (void).cxx_destruct;
- (id)currentValueForSimpleChannel:(id)a0;
- (id)deltaValueForSimpleChannel:(id)a0;
- (BOOL)subscribeToGroup:(id)a0 andSubGroup:(id)a1 withChannelIDs:(id)a2 manualChannelOnly:(BOOL)a3;

@end
