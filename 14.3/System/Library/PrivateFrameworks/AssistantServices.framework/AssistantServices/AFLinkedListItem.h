@interface AFLinkedListItem : NSObject

@property (readonly, nonatomic) id object;
@property (retain, nonatomic) AFLinkedListItem *previousItem;
@property (retain, nonatomic) AFLinkedListItem *nextItem;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (void)insertAfterItem:(id)a0;
- (void)insertBeforeItem:(id)a0;
- (void)removeFromList;

@end
