@class UIButton;
@protocol NTKCFaceDetailExpandableDescriptionCellDelegate;

@interface NTKCFaceDetailExpandableDescriptionCell : NTKCFaceDetailDescriptionCell

@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) double laidOutWidth;
@property (nonatomic) BOOL shouldLayoutText;
@property (nonatomic) BOOL expanded;
@property (weak, nonatomic) id<NTKCFaceDetailExpandableDescriptionCellDelegate> delegate;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (void)_moreTapped;

@end
