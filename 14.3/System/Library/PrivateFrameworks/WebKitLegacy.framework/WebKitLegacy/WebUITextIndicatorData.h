@class UIImage, NSArray, UIColor;

@interface WebUITextIndicatorData : NSObject

@property (retain, nonatomic) UIImage *dataInteractionImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRectInRootViewCoordinates;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textBoundingRectInRootViewCoordinates;
@property (retain, nonatomic) NSArray *textRectsInBoundingRectCoordinates;
@property (nonatomic) double contentImageScaleFactor;
@property (retain, nonatomic) UIImage *contentImageWithHighlight;
@property (retain, nonatomic) UIImage *contentImage;
@property (retain, nonatomic) UIImage *contentImageWithoutSelection;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentImageWithoutSelectionRectInRootViewCoordinates;
@property (retain, nonatomic) UIColor *estimatedBackgroundColor;

- (void)dealloc;
- (id)initWithImage:(struct CGImage { } *)a0 textIndicatorData:(const struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x0; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x1; struct FloatRect { struct FloatPoint { float x0; float x1; } x0; struct FloatSize { float x0; float x1; } x1; } x2; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct FloatRect *x0; unsigned int x1; unsigned int x2; } x3; float x4; struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { struct Image *x0; } x5; struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { struct Image *x0; } x6; struct RefPtr<WebCore::Image, WTF::DumbPtrTraits<WebCore::Image> > { struct Image *x0; } x7; struct Color { union { unsigned long long x0; struct ExtendedColor *x1; } x0; } x8; unsigned char x9; struct OptionSet<WebCore::TextIndicatorOption> { unsigned short x0; } x10; } *)a1 scale:(double)a2;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1;

@end
