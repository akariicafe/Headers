@class SFSearchResult;

@interface SearchUIRemoveProactiveResultCommand : SFCommand

@property (readonly, weak, nonatomic) SFSearchResult *interactionResult;
@property (readonly, nonatomic) int type;

- (void).cxx_destruct;
- (id)initWithInteractionResult:(id)a0 ofType:(int)a1;

@end
