@class NSString;

@interface MapsSuggestionsParkedCarTitleFormatter : MapsSuggestionsBaseTitleFormatter <MapsSuggestionsDistanceTitleFormatter>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)formatTitlesForEntry:(id)a0 distance:(double)a1 trafficString:(id)a2;

@end
