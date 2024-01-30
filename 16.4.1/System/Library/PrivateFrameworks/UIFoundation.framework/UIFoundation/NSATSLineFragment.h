@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject {
    void *_line;
    NSATSTypesetter *_typesetter;
    struct _NSRange { unsigned long long location; unsigned long long length; } _glyphRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _characterRange;
    double _minPosition;
    double _maxPosition;
    long long _elasticCharIndex;
    double _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    double _hyphenGlyphWidth;
    struct { unsigned char _directionState : 2; unsigned char _drawsOutside : 1; unsigned char _standaloneAttachment : 1; unsigned char _wrappedByCluster : 1; unsigned int _reserved : 27; } _flags;
}

- (void)finalize;
- (void)dealloc;

@end
