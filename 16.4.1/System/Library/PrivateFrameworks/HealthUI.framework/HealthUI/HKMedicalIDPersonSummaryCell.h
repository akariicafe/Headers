@class UIStackView, NSString, UIImage, UIFont, NSCalendar, UIImageView, NSDateComponents, NSLayoutConstraint, NSNumber, UILabel;

@interface HKMedicalIDPersonSummaryCell : UITableViewCell {
    UIImageView *_pictureView;
    UILabel *_nameLabel;
    UILabel *_birthdateLabel;
    UILabel *_organDonationLabel;
    UILabel *_emergencyAccessLabel;
    UIStackView *_fullContainerView;
    UIStackView *_mainContainerView;
    UIStackView *_labelContainerView;
    UIFont *_nameLabelFont;
    NSLayoutConstraint *_pictureWidthAnchor;
    NSCalendar *_gregorianCalendar;
    BOOL _resetFormatters;
}

@property (retain, nonatomic) UIImage *picture;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDateComponents *gregorianBirthday;
@property (retain, nonatomic) NSNumber *organDonationStatus;
@property (nonatomic) BOOL shareDuringEmergencyCalls;
@property (nonatomic) BOOL shareOnLockScreen;

- (void)localeDidChange:(id)a0;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_cachedCalendar;
- (void)buildEmergencyAccessTableItem;
- (id)notOrganDonorString;
- (id)stringWithImageNamed:(id)a0 withText:(id)a1 andColor:(id)a2;
- (void)timeZoneDidChange:(id)a0;
- (void)updateSubviewsFromData;

@end
