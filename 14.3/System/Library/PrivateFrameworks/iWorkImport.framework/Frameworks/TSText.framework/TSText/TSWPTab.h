@class NSString;

@interface TSWPTab : NSObject <NSCopying>

@property (nonatomic) double position;
@property (nonatomic) int alignment;
@property (copy, nonatomic) NSString *leader;

+ (id)tab;
+ (id)tabLeaderFromDisplayString:(id)a0;
+ (int)tabAlignmentFromString:(id)a0 isRTL:(BOOL)a1;
+ (id)displayStringFromTabLeader:(id)a0;
+ (id)tabStopDisplayStringPoint;
+ (id)tabStopLeaderStringPoint;
+ (id)tabStopDisplayStringDash;
+ (id)tabStopLeaderStringDash;
+ (id)tabStopDisplayStringUnderscore;
+ (id)tabStopLeaderStringUnderscore;
+ (id)tabStopDisplayStringArrow;
+ (id)tabStopLeaderStringArrow;
+ (id)tabStopAlignmentStringLeft;
+ (id)tabStopAlignmentStringCenter;
+ (id)tabStopAlignmentStringRight;
+ (id)tabStopAlignmentStringDecimal;
+ (id)tabStopAlignmentStringTop;
+ (id)tabStopAlignmentStringMiddle;
+ (id)tabStopAlignmentStringBottom;
+ (id)tabStopDisplayStringNone;
+ (id)tabStopLeaderStringArrowRTL;
+ (id)stringFromTabAlignment:(int)a0 isRTL:(BOOL)a1 isVertical:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithArchive:(const struct TabArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; float x5; int x6; } *)a0 unarchiver:(id)a1;
- (id)initWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (long long)compareToPosition:(double)a0;
- (double)positionInInches;
- (void)setPositionInInches:(double)a0;
- (BOOL)isEqualToPosition:(double)a0;
- (void)saveToArchive:(struct TabArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; float x5; int x6; } *)a0 archiver:(id)a1;

@end
