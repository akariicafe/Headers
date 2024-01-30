@class NSString;

@interface TSWPTab : NSObject <NSCopying>

@property (nonatomic) double position;
@property (nonatomic) int alignment;
@property (copy, nonatomic) NSString *leader;

+ (void)initialize;
+ (id)tab;
+ (id)kTabStopAlignmentStringLeft;
+ (id)kTabStopAlignmentStringCenter;
+ (id)kTabStopAlignmentStringRight;
+ (id)kTabStopAlignmentStringDecimal;
+ (id)kTabStopDisplayStringNone;
+ (id)kTabStopDisplayStringPoint;
+ (id)kTabStopDisplayStringDash;
+ (id)kTabStopDisplayStringUnderscore;
+ (id)kTabStopDisplayStringArrow;
+ (id)kTabStopLeaderStringPoint;
+ (id)kTabStopLeaderStringDash;
+ (id)kTabStopLeaderStringUnderscore;
+ (id)kTabStopLeaderStringArrow;
+ (id)kTabStopLeaderStringArrowRTL;
+ (id)tabLeaderFromDisplayString:(id)a0;
+ (int)tabAlignmentFromString:(id)a0 isRTL:(BOOL)a1;
+ (id)stringFromTabAlignment:(int)a0 isRTL:(BOOL)a1;
+ (id)displayStringFromTabLeader:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)compare:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPosition:(double)a0 alignment:(int)a1 leader:(id)a2;
- (long long)compareToPosition:(double)a0;
- (double)positionInInches;
- (void)setPositionInInches:(double)a0;
- (BOOL)isEqualToPosition:(double)a0;

@end
