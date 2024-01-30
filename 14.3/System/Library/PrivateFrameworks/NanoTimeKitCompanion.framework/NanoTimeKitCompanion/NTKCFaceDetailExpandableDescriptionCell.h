@class UIButton, NSString;
@protocol NTKCFaceDetailExpandableDescriptionCellDelegate;

@interface NTKCFaceDetailExpandableDescriptionCell : NTKCFaceDetailDescriptionCell

@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) double laidOutWidth;
@property (retain, nonatomic) NSString *laidOutContentSizeCategory;
@property (nonatomic) BOOL canExpand;
@property (nonatomic) BOOL expanded;
@property (weak, nonatomic) id<NTKCFaceDetailExpandableDescriptionCellDelegate> delegate;

+ (id)reuseIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)_moreButton;
- (void)layoutSubviews;
- (void)_fontSizeDidChange;
- (void)_moreTapped;

@end
