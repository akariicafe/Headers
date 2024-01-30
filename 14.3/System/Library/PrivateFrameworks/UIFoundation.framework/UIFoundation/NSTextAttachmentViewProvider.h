@class NSTextAttachment, NSTextContainer, UIView, NSLayoutManager;
@protocol NSTextLocation;

@interface NSTextAttachmentViewProvider : NSObject {
    UIView *_view;
    NSTextContainer *_textContainer;
}

@property (weak) NSTextAttachment *textAttachment;
@property (weak) NSLayoutManager *layoutManager;
@property (readonly) unsigned long long characterIndex;
@property (readonly) id<NSTextLocation> location;
@property (retain) UIView *view;
@property BOOL tracksTextAttachmentViewBounds;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void)setView:(id)a0;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 characterIndex:(unsigned long long)a2 layoutManager:(id)a3;
- (void).cxx_destruct;
- (id)view;
- (void)dealloc;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 location:(id)a2;
- (void)loadView;
- (void)removeView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;

@end
