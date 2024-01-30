@class NSString, NSDate;

@interface ICHashtagSuggestionItem : NSObject

@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSString *tokenContentIdentifier;
@property (retain, nonatomic) NSDate *lastUsedDate;

+ (id)suggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)a0;
+ (id)sortedItems:(id)a0 context:(id)a1;
+ (id)sortedSuggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)a0 context:(id)a1;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
