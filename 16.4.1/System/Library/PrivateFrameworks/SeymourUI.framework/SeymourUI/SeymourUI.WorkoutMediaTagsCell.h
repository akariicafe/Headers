@class NSArray;

@interface SeymourUI.WorkoutMediaTagsCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ downloadButton;
    void /* unknown type, empty encoding */ trainerButton;
    void /* unknown type, empty encoding */ tagsLabelTopLayoutConstraint;
    void /* unknown type, empty encoding */ accessibilityMediaTags;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ tagsLabel;
@property (nonatomic, copy) NSArray *accessibilityMediaTags;

- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)handleDownloadButtonTapped:(id)a0;
- (void)handleTrainerButtonTapped:(id)a0;

@end
