@class TSUBezierPath, NSString;

@interface TSDLineEnd : NSObject <TSSPropertyValueArchiving, NSCopying, TSDMixing> {
    TSUBezierPath *_wrapPath;
}

@property (readonly, copy, nonatomic) TSUBezierPath *path;
@property (readonly, copy, nonatomic) TSUBezierPath *wrapPath;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) BOOL isFilled;
@property (readonly, nonatomic) BOOL isNone;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int lineJoin;

+ (id)none;
+ (id)line;
+ (id)lineEndWithPath:(const struct CGPath { } *)a0 wrapPath:(const struct CGPath { } *)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(BOOL)a3 identifier:(id)a4;
+ (id)lineEndWithIdentifier:(id)a0;
+ (id)lineEndWithPath:(const struct CGPath { } *)a0 endPoint:(struct CGPoint { double x0; double x1; })a1 isFilled:(BOOL)a2 identifier:(id)a3;
+ (id)simpleArrow;
+ (id)filledCircle;
+ (id)filledDiamond;
+ (id)openArrow;
+ (id)filledArrow;
+ (id)filledSquare;
+ (id)openSquare;
+ (id)openCircle;
+ (id)invertedArrow;
+ (id)lineEndWithType:(int)a0;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithPath:(const struct CGPath { } *)a0 wrapPath:(const struct CGPath { } *)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(BOOL)a3 identifier:(id)a4 lineJoin:(int)a5;
- (id)initWithPath:(const struct CGPath { } *)a0 endPoint:(struct CGPoint { double x0; double x1; })a1 isFilled:(BOOL)a2 identifier:(id)a3;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGImage { } *)newLineEndImageOnRight:(BOOL)a0 forContentsScale:(double)a1 withSize:(struct CGSize { double x0; double x1; })a2;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (double)scaleForStrokeWidth:(double)a0;
- (id)initWithBezierPath:(id)a0 wrapPath:(id)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(BOOL)a3 identifier:(id)a4 lineJoin:(int)a5;

@end
