@class SUManagerClient, NSString, SUDocumentationData, UILabel, PSWebContainerView, UIView;

@interface PSGSWVersionDetailCell : PSTableCell {
    SUDocumentationData *_documentationData;
    NSString *_buildVersion;
    int _osUpdateType;
    UILabel *_titleLabelView;
    PSWebContainerView *_releaseNotesSummaryView;
    UIView *_revokedSplatView;
    SUManagerClient *_suClient;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)releaseNotesSummary;
- (double)preferredHeightWithTable:(id)a0;
- (id)releaseNotesSummaryView;
- (id)titleLabelString;
- (void)configureContentView;
- (id)preparingRollbackString;
- (id)releaseNotesSummaryString;
- (id)revokedSplatView;
- (id)systemVersionValueForKey:(id)a0;
- (id)titleLabelView;

@end
