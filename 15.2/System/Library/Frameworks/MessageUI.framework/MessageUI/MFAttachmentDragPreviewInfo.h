@class UIImage;

@interface MFAttachmentDragPreviewInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isInlineImage;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) struct CGSize { double width; double height; } displaySize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)targetedDragPreviewInContainer:(id)a0 centerOffset:(struct CGPoint { double x0; double x1; })a1;

@end
