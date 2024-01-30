@interface MKJunction : NSObject <NSSecureCoding> {
    struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_elements;
    unsigned long long _count;
    int _maneuver;
    int _drivingSide;
    struct GEOJunctionElement *_snapped[8];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(int)a0 maneuver:(int)a1 drivingSide:(int)a2 elements:(struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a3 count:(unsigned long long)a4;
- (void)getArrowPath:(id *)a0 arrowStrokePath:(id *)a1 intersectionBackgroundPath:(id *)a2 strokePath:(id *)a3 withSize:(struct CGSize { double x0; double x1; })a4 metrics:(struct { struct CGSize { double x0; double x1; } x0; double x1; double x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; double x6; double x7; long long x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; BOOL x25; double x26; double x27; double x28; BOOL x29; BOOL x30; })a5 drivingSide:(int)a6 visualCenter:(struct CGPoint { double x0; double x1; } *)a7;
- (void)getRoundaboutArrowPath:(id *)a0 intersectionBackgroundPath:(id *)a1 strokePath:(id *)a2 withSize:(struct CGSize { double x0; double x1; })a3 metrics:(struct { struct CGSize { double x0; double x1; } x0; double x1; double x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; double x6; double x7; long long x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; BOOL x25; double x26; double x27; double x28; BOOL x29; BOOL x30; })a4 drivingSide:(int)a5 visualCenter:(struct CGPoint { double x0; double x1; } *)a6;
- (id)initWithJunction:(id)a0;
- (void)getArrowPath:(id *)a0 arrowStrokePath:(id *)a1 pivot:(struct CGPoint { double x0; double x1; } *)a2 withSize:(struct CGSize { double x0; double x1; })a3 metrics:(struct { struct CGSize { double x0; double x1; } x0; double x1; double x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; double x6; double x7; long long x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; BOOL x25; double x26; double x27; double x28; BOOL x29; BOOL x30; })a4 visualCenter:(struct CGPoint { double x0; double x1; } *)a5;
- (id)roundaboutArrowWithSize:(struct CGSize { double x0; double x1; })a0 metrics:(struct { struct CGSize { double x0; double x1; } x0; double x1; double x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; double x6; double x7; long long x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; BOOL x25; double x26; double x27; double x28; BOOL x29; BOOL x30; })a1 outerRadius:(double)a2 endAngle:(double)a3 pivot:(struct CGPoint { double x0; double x1; } *)a4;
- (void)encodeWithCoder:(id)a0;

@end
