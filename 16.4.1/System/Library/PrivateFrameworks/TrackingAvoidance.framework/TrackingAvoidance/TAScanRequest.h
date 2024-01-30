@class TAScanRequestSettings, NSDate;

@interface TAScanRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastScanRequestedDate;
@property (nonatomic) unsigned long long interVisitScanCount;
@property (readonly, nonatomic) TAScanRequestSettings *settings;
@property (readonly, nonatomic) NSDate *scheduledScanRequest;

- (void)encodeWithCoder:(id)a0;
- (void)scheduleInterVisitScanForAdvertisement:(id)a0 deviceRecord:(id)a1 clock:(id)a2;
- (id)evictScheduledInterVisitScanWithClock:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldScanOnAdvertisement:(id)a0 withDeviceRecord:(id)a1;
- (id)evaluateVisitEntry:(id)a0 clock:(id)a1;
- (id)evaluateInterVisitAfterVisitExit:(id)a0 displayEvents:(id)a1 advertisements:(id)a2 deviceRecord:(id)a3 clock:(id)a4;
- (BOOL)isEqual:(id)a0;
- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;

@end
