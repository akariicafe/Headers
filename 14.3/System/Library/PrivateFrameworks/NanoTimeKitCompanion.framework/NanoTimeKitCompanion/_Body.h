@class NSArray, NSMutableArray;

@interface _Body : _Geometry

@property (nonatomic) float width;
@property (nonatomic) float height;
@property (retain, nonatomic) NSArray *texs;
@property (retain, nonatomic) NSMutableArray *shiftTexs12;
@property (retain, nonatomic) NSMutableArray *shiftTexs14;
@property (retain, nonatomic) NSMutableArray *shiftTexs23;
@property (retain, nonatomic) NSMutableArray *shiftTexs13;
@property (nonatomic) void /* unknown type, empty encoding */ bone;
@property (nonatomic) void /* unknown type, empty encoding */ offset;
@property (nonatomic) float curBodyX;
@property (nonatomic) char animationDirection;
@property (nonatomic) char animationFrame;
@property (nonatomic) char frameDisplayTime60th;
@property (nonatomic) unsigned char state;
@property (nonatomic) unsigned char waitingForFootRaise;

- (void).cxx_destruct;

@end
