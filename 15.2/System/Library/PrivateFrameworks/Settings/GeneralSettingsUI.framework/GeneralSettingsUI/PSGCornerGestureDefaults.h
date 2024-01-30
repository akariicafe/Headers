@class NSUserDefaults;

@interface PSGCornerGestureDefaults : NSObject {
    NSUserDefaults *_defaults;
}

@property (nonatomic) long long bottomLeftFeature;
@property (nonatomic) unsigned long long bottomLeftTouchTypes;
@property (nonatomic) long long bottomRightFeature;
@property (nonatomic) unsigned long long bottomRightTouchTypes;

- (void).cxx_destruct;
- (id)init;

@end
