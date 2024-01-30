@class NSString, CLCircularRegion;

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder>

@property (copy, nonatomic) CLCircularRegion *region;
@property (readonly, nonatomic) unsigned long long locationEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEvent:(id)a0;
- (id)eventType;
- (void).cxx_destruct;
- (BOOL)isRegionAtHome:(id)a0;
- (id)naturalLanguageNameWithOptions:(id)a0;
- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)a0;
- (id)comparisonKey;

@end
