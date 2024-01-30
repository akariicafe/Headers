@class NSString, UIView;
@protocol SFPrivacyReportGridItemDelegate;

@interface SFPrivacyReportOverviewCellView : UIView <SFPrivacyReportGridItem> {
    UIView *_topHairline;
    UIView *_bottomHairline;
    UIView *_trailingHairline;
}

@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL usesInsetStyle;
@property (weak, nonatomic) id<SFPrivacyReportGridItemDelegate> delegate;
@property (nonatomic) unsigned long long gridPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateLayoutMargins;
- (void)willMoveToWindow:(id)a0;
- (void)_updateHairlinesIfNeeded;

@end
