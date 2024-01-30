@class NSString;

@interface AKTSDLineEnd : NSObject <NSCopying> {
    struct CGPath { } *mWrapPath;
}

@property (readonly, nonatomic) struct CGPath { } *path;
@property (readonly, nonatomic) struct CGPath { } *wrapPath;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) BOOL isFilled;
@property (readonly, nonatomic) BOOL isNone;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int lineJoin;

+ (id)none;
+ (id)line;
+ (id)filledArrow;
+ (id)filledCircle;
+ (id)filledDiamond;
+ (id)filledSquare;
+ (id)invertedArrow;
+ (id)lineEndWithIdentifier:(id)a0;
+ (id)lineEndWithPath:(struct CGPath { } *)a0 endPoint:(struct CGPoint { double x0; double x1; })a1 isFilled:(BOOL)a2 identifier:(id)a3;
+ (id)lineEndWithPath:(struct CGPath { } *)a0 wrapPath:(struct CGPath { } *)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(BOOL)a3 identifier:(id)a4;
+ (id)lineEndWithType:(int)a0;
+ (id)openArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)simpleArrow;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPath:(struct CGPath { } *)a0 endPoint:(struct CGPoint { double x0; double x1; })a1 isFilled:(BOOL)a2 identifier:(id)a3;
- (id)initWithPath:(struct CGPath { } *)a0 wrapPath:(struct CGPath { } *)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(BOOL)a3 identifier:(id)a4 lineJoin:(int)a5;

@end
