@class NSUserDefaults;

@interface PSGCornerGestureDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (readonly, nonatomic) BOOL anyCornerGestureAllowsDirectTouches;
@property (readonly, nonatomic) BOOL anyCornerGestureAllowsDirectTouchesSwitchEnabled;
@property (nonatomic) long long bottomLeftFeature;
@property (nonatomic) unsigned long long bottomLeftTouchTypes;
@property (nonatomic) long long bottomRightFeature;
@property (nonatomic) unsigned long long bottomRightTouchTypes;

+ (id)keyPathsForValuesAffectingAnyCornerGestureAllowsDirectTouchesSwitchEnabled;

- (id)init;
- (void).cxx_destruct;

@end
