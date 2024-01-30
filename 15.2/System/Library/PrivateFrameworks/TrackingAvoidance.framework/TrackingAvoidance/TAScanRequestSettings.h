@interface TAScanRequestSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double minVisitEntryDisplayOnDuration;
@property (readonly, nonatomic) double minInterVisitDisplayOnDuration;
@property (readonly, nonatomic) double interVisitScanDelay;
@property (readonly, nonatomic) unsigned long long maxInterVisitScanRequests;

- (id)initWithMinVisitEntryDisplayOnDuration:(double)a0 minInterVisitDisplayOnDuration:(double)a1 interVisitScanDelay:(double)a2 maxInterVisitScanRequests:(unsigned long long)a3;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMinVisitEntryDisplayOnDurationOrDefault:(id)a0 minInterVisitDisplayOnDurationOrDefault:(id)a1 interVisitScanDelayOrDefault:(id)a2 maxInterVisitScanRequestsOrDefault:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
