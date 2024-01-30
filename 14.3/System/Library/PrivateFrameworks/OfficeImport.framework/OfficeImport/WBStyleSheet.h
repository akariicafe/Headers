@interface WBStyleSheet : NSObject

+ (void)initializeStyles:(id)a0 with:(struct WrdStyleSheet { void /* function */ **x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; struct WrdStyle *x5; struct ChVector<WrdStyle *> { struct WrdStyle **x0; struct WrdStyle **x1; struct __compressed_pair<WrdStyle **, ChAllocator<WrdStyle *> > { struct WrdStyle **x0; } x2; } x6; struct WrdPredefinedStyleInfo { unsigned char x0 : 1; } x7[156]; unsigned short x8; } *)a1 reader:(id)a2;
+ (void)readFrom:(id)a0 styleSheet:(id)a1;

@end
