@class NSArray;

@interface SGRealtimeSuggestionsTuple : NSObject

@property (retain) NSArray *contacts;
@property (retain) NSArray *events;
@property (retain) NSArray *reminders;
@property (retain) NSArray *deliveries;
@property (retain) NSArray *invalidatedIdentifiers;

- (unsigned long long)suggestionsCount;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)combinedSuggestions;

@end
