@class NSString;
@protocol CNContactListActionDelegate;

@interface CNContactListUndoableAction : CNContactListAction <CNContactListUndoableAction>

@property (weak, nonatomic) id<CNContactListActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUndoAction;
- (BOOL)shouldReloadListOnCompletion;

@end
