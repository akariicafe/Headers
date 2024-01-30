@class NSString;

@interface KeynoteQuicklook.KNLiveVideoSourceSymbolDrawingHelper : NSObject {
    void /* unknown type, empty encoding */ abbreviationText;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextFixedPointSize;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextBoundsSize;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextLine;
    void /* unknown type, empty encoding */ lastDrawnAbbreviationTextColor;
}

@property (nonatomic, readonly) NSString *abbreviationText;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ imageIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ tintColorIdentifier;
@property (nonatomic) void /* unknown type, empty encoding */ drawsInvisibleText;
@property (nonatomic, retain) void /* unknown type, empty encoding */ lastDrawnAbbreviationFont;

+ (id)fontWithPointSize:(double)a0;

- (void).cxx_destruct;
- (id)init;
- (void)drawIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 includeBackground:(BOOL)a2;
- (id)initWithAbbreviationText:(id)a0 imageIdentifier:(long long)a1 tintColorIdentifier:(long long)a2;
- (struct CGSize { double x0; double x1; })boundsSizeForPointSize:(double)a0;
- (void)drawWithPointSize:(double)a0 centeredIn:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2 includeBackground:(BOOL)a3;

@end
