@class NSMutableArray;

@interface _Head : _Geometry

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSMutableArray *texs;
@property (retain, nonatomic) NSMutableArray *blinkTexs;
@property (nonatomic) void /* unknown type, empty encoding */ bone;
@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic) float curHeadTilt;
@property (nonatomic) float curHeadX;
@property (nonatomic) int inAnimation;

- (void).cxx_destruct;

@end
