@class NSString;

@interface MapsSuggestionsTooEarlyFilter : MapsSuggestionsBaseFilter <MapsSuggestionsFilter>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isEnabled;

- (BOOL)shouldKeepEntry:(id)a0;

@end
