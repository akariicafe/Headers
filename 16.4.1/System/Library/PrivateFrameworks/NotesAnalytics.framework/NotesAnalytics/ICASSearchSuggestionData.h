@class NSString, ICASSearchSuggestionType;

@interface ICASSearchSuggestionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASSearchSuggestionType *searchSuggestionType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSearchSuggestionType:(id)a0;

@end
