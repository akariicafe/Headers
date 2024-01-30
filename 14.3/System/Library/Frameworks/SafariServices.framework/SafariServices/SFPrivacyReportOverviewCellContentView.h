@class UILabel, NSString, UIView;
@protocol SFPrivacyReportGridItemDelegate;

@interface SFPrivacyReportOverviewCellContentView : UIView <SFPrivacyReportGridItem> {
    UIView *_topHairline;
    UIView *_bottomHairline;
    UIView *_trailingHairline;
}

@property (readonly, nonatomic) UILabel *reportTitleLabel;
@property (readonly, nonatomic) UILabel *reportSubtitleLabel;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL usesInsetStyle;
@property (weak, nonatomic) id<SFPrivacyReportGridItemDelegate> delegate;
@property (nonatomic) unsigned long long gridPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)_updateHairlinesIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLayoutMargins;

@end
