@interface BRCSharingSaveShareOperation : BRCSharingModifyShareOperation

- (void)main;
- (id)createActivity;
- (void)performAfterUnsharingParentShareTurdIfNecessary:(id /* block */)a0;
- (id)initWithShare:(id)a0 zone:(id)a1;

@end
