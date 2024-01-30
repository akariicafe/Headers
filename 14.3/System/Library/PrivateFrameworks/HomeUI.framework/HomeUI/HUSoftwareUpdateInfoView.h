@class UIStackView, NSString, UIImage, HFItem, HUInlineWebContainerView, UIImageView, NSLayoutConstraint, HUSoftwareUpdateAnimatedIcon, UILabel;
@protocol HUResizableCellDelegate, HUSoftwareUpdateInternalResizingDelegate;

@interface HUSoftwareUpdateInfoView : UIView <UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol>

@property (weak, nonatomic) id<HUSoftwareUpdateInternalResizingDelegate> internalViewResizingDelegate;
@property (retain, nonatomic) HUSoftwareUpdateAnimatedIcon *animatedGearView;
@property (retain, nonatomic) UIImage *gearBackgroundImage;
@property (retain, nonatomic) UIImageView *gearBackgroundImageView;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UILabel *updateNameLabel;
@property (retain, nonatomic) UILabel *publisherNameLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) HUInlineWebContainerView *releaseNotesSummaryView;
@property (retain, nonatomic) NSLayoutConstraint *releaseNotesHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;

@end
