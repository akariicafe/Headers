@class STUsageReport, UIStackView;

@interface STNotificationsPickupSummaryView : UIView

@property (retain, nonatomic) STUsageReport *usageReport;
@property (retain, nonatomic) UIStackView *stackView;

- (void).cxx_destruct;
- (id)initWithUsageReport:(id)a0;
- (id)_attributedStringForNotificationsTitle;
- (id)_attributedStringForNotificationsDetailText;
- (id)_attributedStringForPickUpTitle;
- (id)_attributedStringForPickUpDetailText;
- (id)_attributedString:(id)a0 withFont:(id)a1;

@end
