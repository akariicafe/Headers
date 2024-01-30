@class NSArray, UIView;

@interface PUPhotoEditButtonCenteredToolbar : PUPhotoEditToolbar {
    UIView *_centerView;
    NSArray *_leadingViews;
    NSArray *_trailingViews;
    NSArray *_leadingLayoutConstraints;
    NSArray *_trailingLayoutConstraints;
    NSArray *_centerLayoutConstraints;
}

@property (readonly, nonatomic) double interItemSpacing;

- (void).cxx_destruct;
- (void)_addCenterConstraintsWithMetrics:(id)a0 verticalLayout:(BOOL)a1;
- (void)_addLeadingConstraintsWithMetrics:(id)a0 verticalLayout:(BOOL)a1;
- (void)_addTrailingConstraintsWithMetrics:(id)a0 verticalLayout:(BOOL)a1;
- (void)_invalidateAllConstraints;
- (void)setCenterView:(id)a0 leadingViews:(id)a1 trailingViews:(id)a2;

@end
