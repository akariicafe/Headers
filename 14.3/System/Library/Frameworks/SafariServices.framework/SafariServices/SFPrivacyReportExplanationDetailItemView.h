@class NSString, UILabel, UIView, NSLayoutConstraint;
@protocol SFPrivacyReportGridItemDelegate;

@interface SFPrivacyReportExplanationDetailItemView : UIView <SFPrivacyReportGridItem> {
    UIView *_hairline;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_hairlineTopConstraint;
}

@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *bodyLabel;
@property (nonatomic) double titleLabelTopSpacing;
@property (nonatomic) double hairlineTopSpacing;
@property (weak, nonatomic) id<SFPrivacyReportGridItemDelegate> delegate;
@property (nonatomic) unsigned long long gridPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
