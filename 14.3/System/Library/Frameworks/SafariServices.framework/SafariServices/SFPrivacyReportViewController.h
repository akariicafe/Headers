@class NSString, WBSPrivacyReportData, _SFTableViewDiffableDataSource, UITableView;

@interface SFPrivacyReportViewController : UIViewController <UITableViewDelegatePrivate, _SFTableViewDiffableDataSourceDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportDetailToggleTableViewCellDelegate> {
    UITableView *_tableView;
    BOOL _showExplanationDetailView;
    WBSPrivacyReportData *_privacyReportData;
    _SFTableViewDiffableDataSource *_diffableDataSource;
    BOOL _needsRowHeightUpdate;
    long long _listDetailType;
    double _maxCountForDetailList;
    BOOL _showingCurrentWebsite;
    BOOL _usesInsetStyle;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (void)_doneBarButtonItemAction:(id)a0;
- (void)_updateUsesInsetStyle;
- (void)_createTableViewIfNeededLoadingReport:(BOOL)a0;
- (void)_reloadDataLoadingReport:(BOOL)a0;
- (id)_cellForRowWithIndexPath:(id)a0 itemIdentifier:(id)a1;
- (void)setNeedsUpdateRowHeight;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (long long)_sectionTypeFromSectionIndex:(long long)a0;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (void)cellDidToggleExpandDetailedExplanation:(id)a0;
- (void)gridViewDidUpdateContentSize:(id)a0;
- (void)cellDidToggleDetailType:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateLayoutMargins;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
