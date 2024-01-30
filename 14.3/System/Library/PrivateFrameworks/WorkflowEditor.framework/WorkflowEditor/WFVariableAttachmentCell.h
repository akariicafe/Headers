@class UIFont, UIColor, NSString, UIImage, WFVariableAttachment;

@interface WFVariableAttachmentCell : NSObject <NSTextAttachmentCell>

@property (retain, nonatomic) UIImage *cachedImage;
@property (nonatomic) unsigned long long cachedImageControlState;
@property (retain, nonatomic) UIFont *cachedImageFont;
@property (retain, nonatomic) UIColor *cachedImageTintColor;
@property (copy, nonatomic) NSString *cachedImageVariableName;
@property (weak, nonatomic) WFVariableAttachment *attachment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cellFrameForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (struct CGPoint { double x0; double x1; })cellBaselineOffset;
- (void)clearCachedImage;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterIndex:(unsigned long long)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (unsigned long long)currentControlState;
- (id)attachmentImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
