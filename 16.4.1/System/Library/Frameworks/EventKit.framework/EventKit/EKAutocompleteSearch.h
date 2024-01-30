@interface EKAutocompleteSearch : NSObject

@property unsigned long long maximumResultCount;

+ (id)searchWithEventStore:(id)a0 searchString:(id)a1 maximumResultCount:(unsigned long long)a2 ignoreScheduledEvents:(BOOL)a3 initialEvent:(id)a4 pasteboardItemProvider:(id)a5 completionHandler:(id /* block */)a6;

@end
