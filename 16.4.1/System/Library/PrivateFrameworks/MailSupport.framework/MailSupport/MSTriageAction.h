@class EMMessageRepository, MSMessageListItemSelection;
@protocol MSTriageActionDelegate;

@interface MSTriageAction : NSObject

@property (readonly, nonatomic) MSMessageListItemSelection *messageListItemSelection;
@property (readonly, nonatomic) EMMessageRepository *messageRepository;
@property (readonly, weak, nonatomic) id<MSTriageActionDelegate> delegate;

+ (id)log;
+ (void)_performAction:(id)a0 messageRepository:(id)a1 undoManager:(id)a2 actionName:(id)a3;

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 delegate:(id)a1;
- (void)performWithUndoManager:(id)a0 actionName:(id)a1 completion:(id /* block */)a2;

@end
