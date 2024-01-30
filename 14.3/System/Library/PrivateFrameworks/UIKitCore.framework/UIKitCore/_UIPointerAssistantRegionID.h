@class UIPointerRegion, _UIAssistantEntry;

@interface _UIPointerAssistantRegionID : NSObject

@property (readonly, nonatomic) UIPointerRegion *region;
@property (readonly, nonatomic) _UIAssistantEntry *assistant;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRegion:(id)a0 assistant:(id)a1;

@end
