@interface WFListEditorDeletionConfirmation : NSObject

@property (readonly, nonatomic) unsigned long long itemIndex;
@property (readonly, nonatomic) id /* block */ confirmationHandler;

+ (id)confirmationForDeletingItemAtIndex:(unsigned long long)a0 withHandler:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithItemIndex:(unsigned long long)a0 confirmationHandler:(id /* block */)a1;

@end
