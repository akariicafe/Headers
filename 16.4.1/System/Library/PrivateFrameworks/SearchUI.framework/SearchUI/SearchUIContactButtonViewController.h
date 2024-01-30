@class NSString, SearchUIActionsViewBoxView;

@interface SearchUIContactButtonViewController : SearchUIButtonItemViewController <CNContactInlineActionsViewControllerDelegate>

@property (retain) SearchUIActionsViewBoxView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
