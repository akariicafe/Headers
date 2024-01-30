@interface AFLinkedListItem : NSObject

@property (readonly, nonatomic) id object;
@property (retain, nonatomic) AFLinkedListItem *previousItem;
@property (retain, nonatomic) AFLinkedListItem *nextItem;

- (void)insertBeforeItem:(id)a0;
- (void)insertAfterItem:(id)a0;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (void)removeFromList;

@end
