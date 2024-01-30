@class NSArray, UITargetedPreview;

@interface _UIContextMenuLayoutArbiterInput : NSObject

@property (nonatomic) BOOL shouldUpdateAttachment;
@property (nonatomic) BOOL shouldAvoidInputViews;
@property (nonatomic) struct CGSize { double width; double height; } preferredPreviewSize;
@property (nonatomic) struct CGSize { double width; double height; } preferredMenuSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredEdgeInsets;
@property (nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; } preferredAnchor;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) NSArray *accessoryViews;

- (void).cxx_destruct;

@end
