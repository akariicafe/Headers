@class NSMutableString, NSMutableDictionary, CSSearchableItemAttributeSet;

@interface CMIndexingState : CMState

@property (retain) NSMutableDictionary *metadata;
@property (retain, nonatomic) CSSearchableItemAttributeSet *searchableAttributes;
@property (retain) NSMutableString *textContent;

- (void).cxx_destruct;
- (id)init;

@end
