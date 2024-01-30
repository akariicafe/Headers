@class NSString, NSDate;

@interface ICHashtagSuggestionItem : NSObject

@property (retain, nonatomic) NSString *displayText;
@property (retain, nonatomic) NSString *tokenContentIdentifier;
@property (retain, nonatomic) NSDate *lastUsedDate;

+ (id)sortedItems:(id)a0 context:(id)a1;
+ (id)sortedSuggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)a0 context:(id)a1;
+ (id)suggestionItemsWithHashtagsIncludingHashtagsFromOtherApps:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (void).cxx_destruct;

@end
