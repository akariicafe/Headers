@class NSArray, UITargetedPreview;

@interface _UIContextMenuLayoutArbiterInput : NSObject

@property (nonatomic) BOOL shouldUpdateAttachment;
@property (nonatomic) BOOL shouldAvoidInputViews;
@property (nonatomic) struct CGSize { double width; double height; } preferredPreviewSize;
@property (nonatomic) struct CGSize { double width; double height; } preferredMenuSize;
@property (nonatomic) struct CGPoint { double x; double y; } preferredMenuAttachmentPoint;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredEdgeInsets;
@property (nonatomic) double preferredContentSpacing;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } preferredAnchor;
@property (nonatomic) unsigned long long preferredPreviewFittingStrategy;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) NSArray *accessoryViews;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasVisibleMenu;

@end
