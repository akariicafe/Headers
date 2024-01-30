@class NSTextTableBlock;

@interface NSTextBlockLayoutHelper : NSObject {
    NSTextTableBlock *_block;
    struct _NSRange { unsigned long long location; unsigned long long length; } _charRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _glyphRange;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundsRect;
    double _lMargin;
    double _lBorder;
    double _lPadding;
    double _tMargin;
    double _tBorder;
    double _tPadding;
    double _width;
    double _height;
    double _rPadding;
    double _rBorder;
    double _rMargin;
    double _bPadding;
    double _bBorder;
    double _bMargin;
}

- (id)description;
- (void)dealloc;

@end
