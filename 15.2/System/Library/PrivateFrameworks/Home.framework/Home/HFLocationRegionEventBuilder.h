@class NSString, CLCircularRegion;

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder>

@property (copy, nonatomic) CLCircularRegion *region;
@property (readonly, nonatomic) unsigned long long locationEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (id)eventType;
- (id)comparisonKey;
- (id)buildNewEventsFromCurrentState;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)compareToObject:(id)a0;
- (BOOL)isRegionAtHome:(id)a0;

@end
