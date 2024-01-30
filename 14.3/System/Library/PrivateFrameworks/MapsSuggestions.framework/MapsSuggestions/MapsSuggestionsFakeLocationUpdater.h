@class NSString;

@interface MapsSuggestionsFakeLocationUpdater : MapsSuggestionsBaseLocationUpdater <MapsSuggestionsLocationUpdater>

@property (readonly, nonatomic) unsigned long long calledStartImplementation;
@property (readonly, nonatomic) unsigned long long calledStopImplementation;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
