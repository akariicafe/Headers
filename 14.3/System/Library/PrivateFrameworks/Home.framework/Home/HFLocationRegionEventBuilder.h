@class NSString, CLCircularRegion;

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder>

@property (copy, nonatomic) CLCircularRegion *region;
@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithEvent:(id)a0;
- (id)buildNewEventFromCurrentState;
- (BOOL)isRegionAtHome:(id)a0;

@end
