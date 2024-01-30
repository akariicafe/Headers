@class NSString, NSMutableSet, NSMutableDictionary;

@interface ICHashtagsNode : NSObject

@property (copy, nonatomic) NSString *key;
@property (readonly, nonatomic) NSMutableSet *hashtagSuggestions;
@property (readonly, nonatomic) NSMutableSet *possibleHashtagSuggestions;
@property (readonly, nonatomic) NSMutableDictionary *children;
@property (nonatomic) BOOL isPossibleAll;

- (void)addChild:(id)a0;
- (void).cxx_destruct;
- (void)addHashtagSuggestion:(id)a0;
- (void)addPossibleHashtagSuggestion:(id)a0;

@end
