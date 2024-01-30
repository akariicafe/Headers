@class SFTableViewDiffableDataSource, NSString, WBSPrivacyReportData, UITableView;

@interface SFPrivacyReportViewController : UIViewController <SFPrivacyReportPrivacyProxyTipTableViewCellDelegate, UITableViewDelegatePrivate, SFTableViewDiffableDataSourceDelegate, SFPrivacyReportExplanationTableViewCellDelegate, SFPrivacyReportGridViewDelegate, SFPrivacyReportDetailToggleTableViewCellDelegate> {
    UITableView *_tableView;
    BOOL _showExplanationDetailView;
    WBSPrivacyReportData *_privacyReportData;
    SFTableViewDiffableDataSource *_diffableDataSource;
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

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)initWithDomain:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)viewDidLoad;
- (void)_updateLayoutMargins;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canFocusRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (id)_cellForRowWithIndexPath:(id)a0 itemIdentifier:(id)a1;
- (void)_createTableViewIfNeededLoadingReport:(BOOL)a0;
- (void)_doneBarButtonItemAction:(id)a0;
- (BOOL)_privacyProxyTip:(long long *)a0;
- (void)_reloadDataLoadingReport:(BOOL)a0;
- (long long)_sectionTypeFromSectionIndex:(long long)a0;
- (void)_updateUsesInsetStyle;
- (void)cellDidToggleDetailType:(id)a0;
- (void)cellDidToggleExpandDetailedExplanation:(id)a0;
- (void)cellPrivacyProxyStateChanged:(id)a0;
- (void)cellPrivacyProxyUpsellDismissed:(id)a0;
- (void)gridViewDidUpdateContentSize:(id)a0;
- (void)setNeedsUpdateRowHeight;

@end
