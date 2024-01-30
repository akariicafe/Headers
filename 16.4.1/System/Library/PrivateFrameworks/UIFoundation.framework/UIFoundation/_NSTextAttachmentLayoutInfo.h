@class _NSTextAttachmentLayoutContext, NSTextAttachment, NSDictionary, NSTextAttachmentViewProvider, NSTextLayoutFragment;
@protocol NSTextLocation;

@interface _NSTextAttachmentLayoutInfo : NSObject {
    id<NSTextLocation> _location;
    long long _locationOffsetFromBase;
    NSTextAttachmentViewProvider *_textAttachmentViewProvider;
    NSTextLayoutFragment *_textLayoutFragment;
    struct __CTRunDelegate { } *_runDelegate;
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
@property struct CGPoint { double x0; double x1; } attachmentFrameOrigin;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resolvedAttachmentFrame;

- (id)textLayoutFragment;
- (void)_invalidateLocations;
- (const struct __CTRunDelegate { } *)runDelegate;
- (struct CGPoint { double x0; double x1; })attachmentFrameOrigin;
- (void)dealloc;
- (void)_queryLayoutWithHorizontalOffset:(double)a0;
- (void)_queryLayout;
- (void)invalidateAttachmentMeasurements;
- (id)textAttachmentViewProvider;
- (void)setTextAttachmentViewProvider:(id)a0;
- (id)initWithContext:(id)a0 location:(id)a1 attributes:(id)a2;
- (void)setAttachmentFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)location;

@end
