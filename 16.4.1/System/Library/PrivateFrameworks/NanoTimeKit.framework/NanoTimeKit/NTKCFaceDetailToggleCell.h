@class UISwitch;
@protocol NTKCFaceDetailToggleCellDelegate;

@interface NTKCFaceDetailToggleCell : NTKCDetailTableViewCell

@property (retain, nonatomic) UISwitch *toggle;
@property (nonatomic) BOOL on;
@property (weak, nonatomic) id<NTKCFaceDetailToggleCellDelegate> delegate;

+ (id)reuseIdentifier;

- (double)rowHeight;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_switchToggled;

@end
