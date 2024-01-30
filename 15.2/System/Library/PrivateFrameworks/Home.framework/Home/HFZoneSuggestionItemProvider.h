@class HMHome, NSMutableSet;

@interface HFZoneSuggestionItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *zoneBuilderItems;
@property (copy, nonatomic) id /* block */ filter;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)items;
- (id)invalidationReasons;
- (id)_zoneSuggestions;

@end
