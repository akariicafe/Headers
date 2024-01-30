@class NSArray, NSDictionary, UIView, NSLayoutManager, NSTextLayoutManager;
@protocol NSTextContainerView;

@interface NSTextContainer : NSObject <NSSecureCoding, NSTextLayoutOrientationProvider> {
    NSLayoutManager *_layoutManager;
    UIView<NSTextContainerView> *_textView;
    struct CGSize { double width; double height; } _size;
    double _lineFragmentPadding;
    unsigned long long _maximumLines;
    struct __tcFlags { unsigned char widthTracksTextView : 1; unsigned char heightTracksTextView : 1; unsigned char observingFrameChanges : 1; unsigned char lineBreakMode : 4; unsigned char oldAPI : 1; unsigned char _reserved : 8; } _tcFlags;
    NSTextLayoutManager *_textLayoutManager;
    NSArray *_exclusionPaths;
    struct CGPath { } *_cachedBoundingPath;
    struct __CFArray { } *_cachedClippingAttributes;
    struct __CFArray { } *_cachedBounds;
    double _cacheBoundsMinY;
    double _cacheBoundsMaxY;
    double _minimumWidth;
    long long _layoutOrientation;
    NSDictionary *_attributesForExtraLineFragment;
    long long _applicationFrameworkContext;
    BOOL _textViewSupportsAdaptiveColor;
    BOOL _textViewSupportsDowngrade;
    BOOL _textViewHasDefaultParagraphStyle;
    BOOL _textViewHasLinkTextAttributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) NSLayoutManager *layoutManager;
@property (readonly, weak, nonatomic) NSTextLayoutManager *textLayoutManager;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (copy, nonatomic) NSArray *exclusionPaths;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double lineFragmentPadding;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (readonly, nonatomic, getter=isSimpleRectangularTextContainer) BOOL simpleRectangularTextContainer;
@property (nonatomic) BOOL widthTracksTextView;
@property (nonatomic) BOOL heightTracksTextView;
@property (readonly, nonatomic) long long layoutOrientation;

+ (void)initialize;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)attributesForExtraLineFragment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)setTextView:(id)a0;
- (id)textView;
- (void)encodeWithCoder:(id)a0;
- (void)setLayoutOrientation:(long long)a0;
- (void)_commonInit;
- (id)initWithCoder:(id)a0;
- (void)setTextLayoutManager:(id)a0;
- (void)setContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)linkTextAttributes;
- (long long)layoutOrientation;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })containerSize;
- (void)invalidateTextContainerOrigin;
- (struct CGPoint { double x0; double x1; })textContainerOrigin;
- (id)init;
- (id)description;
- (id)defaultParagraphStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(unsigned long long)a1 writingDirection:(long long)a2 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)coordinateAccess:(id /* block */)a0;
- (void)setAttributesForExtraLineFragment:(id)a0;
- (void)_containerTextViewFrameChanged:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView_iOS:(id)a0;
- (id)renderingColorForDocumentColor:(id)a0;
- (BOOL)_containerObservesTextViewFrameChanges;
- (BOOL)_hasLayoutManager:(id)a0;
- (void)_resizeAccordingToTextView:(id)a0;
- (BOOL)_textViewAllowsMigratingToLayoutManager;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })a0;
- (id)markedTextAttributesAtCharacterIndex:(long long)a0 effectiveRange:(out struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (double)minimumLineFragmentWidth;
- (void)replaceLayoutManager:(id)a0;
- (id)selectedTextAttributes;
- (void)setMinimumLineFragmentWidth:(double)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })textContainerInsetsForView:(id)a0;

@end
