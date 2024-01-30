@class NSString, MapsSuggestionsEventKit;

@interface MapsSuggestionsEventKitChangedTrigger : MapsSuggestionsBaseTrigger <MapsSuggestionsEventKitObserver> {
    MapsSuggestionsEventKit *_eventKit;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
