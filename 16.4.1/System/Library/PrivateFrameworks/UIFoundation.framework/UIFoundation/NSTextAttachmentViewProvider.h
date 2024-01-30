@class NSTextAttachment, UIView, NSLayoutManager, NSTextLayoutManager;
@protocol NSTextLocation;

@interface NSTextAttachmentViewProvider : NSObject {
    UIView *_view;
}

@property (weak) NSTextAttachment *textAttachment;
@property (readonly) unsigned long long characterIndex;
@property (weak) NSTextLayoutManager *textLayoutManager;
@property (weak) NSLayoutManager *layoutManager;
@property (retain) id<NSTextLocation> location;
@property (retain) UIView *view;
@property BOOL tracksTextAttachmentViewBounds;

- (id)view;
- (void)setView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;
- (void)removeView;

@end
