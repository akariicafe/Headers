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

- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (long long)compareToPosition:(double)a0;
- (double)positionInInches;
- (void)setPositionInInches:(double)a0;
- (BOOL)isEqualToPosition:(double)a0;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
