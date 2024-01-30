@class NSCountedSet, NSString, _SFPasswordTableConfiguration, _SFPasswordIconController, UISearchController;

@interface _SFPasswordTableViewController : UITableViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, _SFPasswordIconControllerDelegate> {
    _SFPasswordIconController *_iconController;
    NSCountedSet *_visibleDomains;
    _SFPasswordTableConfiguration *_configuration;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) NSString *searchQuery;
@property (readonly, nonatomic) NSString *searchPattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willPresentSearchController:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)tableView:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 previewForDismissingContextMenuWithConfiguration:(id)a1;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (long long)positionForBar:(id)a0;
- (id)tableView:(id)a0 previewForHighlightingContextMenuWithConfiguration:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)_sceneDidEnterBackground:(id)a0;
- (BOOL)_hasMarkedText;
- (void)updateSearchResultsForSearchController:(id)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_updateIconForDomain:(id)a0 forCell:(id)a1;
- (void)shareSavedPassword:(id)a0 modalPresentationSourceView:(id)a1;
- (void)handleContextMenuDeleteForIndexPath:(id)a0;
- (id)_tableView:(id)a0 previewForIndexPath:(id)a1;
- (void)searchPatternDidUpdate;
- (void)iconDidUpdateForDomain:(id)a0 iconController:(id)a1;
- (id)initWithStyle:(long long)a0 siteMetadataManager:(id)a1 configuration:(id)a2;

@end
