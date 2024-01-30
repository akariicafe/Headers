@class SFPrivacyReportOverviewCellContentView;
@protocol WBSPrivacyReportDataProvider;

@interface SFPrivacyReportOverviewView : SFPrivacyReportGridView {
    id<WBSPrivacyReportDataProvider> _reportDataProvider;
    SFPrivacyReportOverviewCellContentView *_trackersPreventedFromProfilingView;
    SFPrivacyReportOverviewCellContentView *_websitesContainingTrackersView;
    SFPrivacyReportOverviewCellContentView *_mostBlockedTrackerView;
}

@property (nonatomic) BOOL usesInsetStyle;

- (void).cxx_destruct;
- (id)initWithPrivacyReportDataProvider:(id)a0;
- (double)interItemSpacing;
- (BOOL)itemViewCanUseCompactWidth:(id)a0;

@end
