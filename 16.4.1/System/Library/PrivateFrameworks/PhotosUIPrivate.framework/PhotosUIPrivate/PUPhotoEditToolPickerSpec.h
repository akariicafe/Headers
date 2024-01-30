@interface PUPhotoEditToolPickerSpec : PUViewControllerSpec

@property (nonatomic) double toolParentViewEdgeSpacing;
@property (readonly, nonatomic) double interToolSpacing;
@property (nonatomic) double horizontalToolTopSpacing;
@property (nonatomic) double horizontalToolBottomSpacing;
@property (nonatomic) double dotSelectionIndicatorDistance;
@property (nonatomic) double dashSelectionIndicatorDistance;
@property (nonatomic) double toolButtonPointerInteractionHighlightPadding;

- (id)init;

@end
