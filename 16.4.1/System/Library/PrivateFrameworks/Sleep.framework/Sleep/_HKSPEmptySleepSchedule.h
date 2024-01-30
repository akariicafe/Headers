@class NSString;
@protocol HKSPSyncAnchor;

@interface _HKSPEmptySleepSchedule : HKSPSleepSchedule <HKSPXPCObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<HKSPSyncAnchor> syncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmptySleepSchedule;

@end
