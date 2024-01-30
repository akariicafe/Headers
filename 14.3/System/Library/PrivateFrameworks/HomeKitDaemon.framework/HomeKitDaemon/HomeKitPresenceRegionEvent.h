@class AWDHomeKitPresenceRegion, NSString;

@interface HomeKitPresenceRegionEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly, nonatomic) AWDHomeKitPresenceRegion *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)uuid;

@end
