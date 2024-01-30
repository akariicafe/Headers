@class NSATSGlyphStorage, NSATSLineFragment;

@interface _NSATSTypesetterGuts : NSObject {
    NSATSLineFragment *_lineFragment;
    NSATSGlyphStorage *_glyphStorage;
    unsigned long long _lastGlyphIndex;
    unsigned long long _lastContainerIndex;
    struct { struct *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; void /* function */ *x5; void /* function */ *x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 2; unsigned char x11 : 1; unsigned char x12 : 3; unsigned char x13 : 7; } x19; void *x20[0]; } *_typesetterAuxiliary;
    union { struct { double x0; double x1; double x2; long long x3; } x0; struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } x1; } *_lineFragmentRectArgs;
    char *_bidiLevels;
    double _defaultTighteningFactor;
    unsigned long long _lineBreakStrategy;
    BOOL _isBusy;
    struct { unsigned char _isiChatTypesetter : 1; unsigned char _resToWillSetLineFragmentRect : 1; unsigned char _limitsLayoutForSuspiciousContents : 1; unsigned char _baselineRendering : 1; unsigned char _forceWordWrapping : 1; unsigned int _reserved : 27; } _flags;
    struct { unsigned char _resolvedWritingDirection : 2; unsigned int _reserved : 30; } _paragraphState;
    struct __CTTypesetter { } *_ctTypesetter;
}

- (void)finalize;
- (void)dealloc;

@end
