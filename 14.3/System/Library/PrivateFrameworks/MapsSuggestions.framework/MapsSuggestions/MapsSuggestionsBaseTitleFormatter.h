@class NSString;

@interface MapsSuggestionsBaseTitleFormatter : NSObject <MapsSuggestionsTitleFormatter>

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)resetTitlesForEntry:(id)a0;

@end
