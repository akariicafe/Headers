@class TAScanRequestSettings, NSDate;

@interface TAScanRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastScanRequestedDate;
@property (nonatomic) unsigned long long interVisitScanCount;
@property (readonly, nonatomic) TAScanRequestSettings *settings;
@property (readonly, nonatomic) NSDate *scheduledScanRequest;

- (id)initWithSettings:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)evictScheduledInterVisitScanWithClock:(id)a0;
- (void)scheduleInterVisitScanForAdvertisement:(id)a0 deviceRecord:(id)a1 clock:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)evaluateInterVisitAfterVisitExit:(id)a0 displayEvents:(id)a1 advertisements:(id)a2 deviceRecord:(id)a3 clock:(id)a4;
- (id)evaluateVisitEntry:(id)a0 clock:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldScanOnAdvertisement:(id)a0 withDeviceRecord:(id)a1;

@end
