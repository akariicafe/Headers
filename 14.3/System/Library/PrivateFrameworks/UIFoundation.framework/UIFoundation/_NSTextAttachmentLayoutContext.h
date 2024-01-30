@class NSDictionary, NSTextAttachment;
@protocol NSTextLocation;

@interface _NSTextAttachmentLayoutContext : NSObject {
    struct __CTRunDelegate { } *_runDelegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _proposedLineFragment;
    BOOL _isBoundsValid;
    BOOL _isLineFragmentLayout;
}

@property (readonly) id<NSTextLocation> location;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly) NSTextAttachment *textAttachment;
@property (readonly) const struct __CTRunDelegate { } *runDelegate;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } proposedLineFragment;

- (void)dealloc;
- (void)_queryLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })proposedLineFragment;
- (void)setProposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (const struct __CTRunDelegate { } *)runDelegate;
- (id)initWithLocation:(id)a0 attributes:(id)a1;

@end
