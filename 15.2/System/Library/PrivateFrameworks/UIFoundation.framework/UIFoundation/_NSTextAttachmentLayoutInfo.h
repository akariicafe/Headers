@class _NSTextAttachmentLayoutContext, NSTextAttachment, NSDictionary, NSTextAttachmentViewProvider, NSTextLayoutFragment;
@protocol NSTextLocation;

@interface _NSTextAttachmentLayoutInfo : NSObject {
    id<NSTextLocation> _location;
    long long _locationOffsetFromBase;
    NSTextAttachmentViewProvider *_textAttachmentViewProvider;
    NSTextLayoutFragment *_textLayoutFragment;
    struct __CTRunDelegate { } *_runDelegate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _resolvedAttachmentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _proposedLineFragment;
    double _baselineOffset;
    double _horizontalOffset;
    BOOL _isBoundsValid;
    BOOL _isLineFragmentLayout;
}

@property (readonly) _NSTextAttachmentLayoutContext *layoutContext;
@property (readonly) id<NSTextLocation> location;
@property (readonly, copy) NSDictionary *attributes;
@property (readonly) NSTextAttachment *textAttachment;
@property (readonly) const struct __CTRunDelegate { } *runDelegate;
@property (retain) NSTextAttachmentViewProvider *textAttachmentViewProvider;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } resolvedAttachmentFrame;

- (id)textLayoutFragment;
- (id)initWithContext:(id)a0 location:(id)a1 attributes:(id)a2;
- (void)invalidateAttachmentMeasurements;
- (id)textAttachmentViewProvider;
- (const struct __CTRunDelegate { } *)runDelegate;
- (void)_invalidateLocations;
- (void)_queryLayout;
- (void)_queryLayoutWithHorizontalOffset:(double)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })resolvedAttachmentFrame;
- (void)setResolvedAttachmentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)location;
- (void)setTextAttachmentViewProvider:(id)a0;

@end
