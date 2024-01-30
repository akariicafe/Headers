@class NSArray;

@interface WDAAnchor : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) int textWrappingMode;
@property (nonatomic) int textWrappingModeType;
@property (retain, nonatomic) NSArray *textWrapPoints;
@property (nonatomic) double wrapDistanceLeft;
@property (nonatomic) double wrapDistanceRight;
@property (nonatomic) double wrapDistanceTop;
@property (nonatomic) double wrapDistanceBottom;
@property (nonatomic) int horizontalPosition;
@property (nonatomic) int relativeHorizontalPosition;
@property (nonatomic) int verticalPosition;
@property (nonatomic) int relativeVerticalPosition;
@property (nonatomic) BOOL allowOverlap;
@property (nonatomic) long long zIndex;

+ (id)stringForTextWrappingModeType:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
