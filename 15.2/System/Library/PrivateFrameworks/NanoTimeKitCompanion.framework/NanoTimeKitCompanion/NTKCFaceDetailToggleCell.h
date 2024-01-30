@class UISwitch;
@protocol NTKCFaceDetailToggleCellDelegate;

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell

@property (retain, nonatomic) UISwitch *toggle;
@property (nonatomic) BOOL on;
@property (weak, nonatomic) id<NTKCFaceDetailToggleCellDelegate> delegate;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (double)rowHeight;
- (void).cxx_destruct;
- (id)init;
- (void)_switchToggled;

@end
