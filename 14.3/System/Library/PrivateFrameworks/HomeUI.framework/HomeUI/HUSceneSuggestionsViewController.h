@class NSString, HUSceneSuggestionsItemManager;
@protocol HUSceneEditorDelegate, HUPresentationDelegate;

@interface HUSceneSuggestionsViewController : HUItemTableViewController <HUPresentationDelegateHost>

@property (weak, nonatomic) HUSceneSuggestionsItemManager *suggestionsItemManager;
@property (weak, nonatomic) id<HUSceneEditorDelegate> sceneEditorDelegate;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)_showActionEditorForActionSetSuggestionItem:(id)a0;
- (void)_showActionEditorForNewCustomScene;

@end
