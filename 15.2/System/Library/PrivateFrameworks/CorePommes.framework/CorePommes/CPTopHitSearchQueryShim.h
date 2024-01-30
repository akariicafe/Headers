@class NSArray;

@interface CPTopHitSearchQueryShim : CPSearchQueryShim

@property (copy) NSArray *filterQueries;
@property (copy) NSArray *protectionClasses;

+ (id)log;

- (void)userEngagedWithResult:(id)a0 interactionType:(int)a1;
- (id)initWithSearchString:(id)a0 keyboardLanguage:(id)a1 attributes:(id)a2 hitCount:(unsigned long long)a3;

@end
