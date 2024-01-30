@class NSSet, NSString;

@interface VOSGesture : NSObject <NSSecureCoding> {
    NSString *_rawValue;
}

@property (class, readonly, nonatomic) VOSGesture *OneFingerSingleTap;
@property (class, readonly, nonatomic) VOSGesture *OneFingerDoubleTap;
@property (class, readonly, nonatomic) VOSGesture *OneFingerTripleTap;
@property (class, readonly, nonatomic) VOSGesture *OneFingerQuadrupleTap;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerSingleTap;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerDoubleTap;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerTripleTap;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerQuadrupleTap;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerSingleTap;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerDoubleTap;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerTripleTap;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerQuadrupleTap;
@property (class, readonly, nonatomic) VOSGesture *FourFingerSingleTap;
@property (class, readonly, nonatomic) VOSGesture *FourFingerDoubleTap;
@property (class, readonly, nonatomic) VOSGesture *FourFingerTripleTap;
@property (class, readonly, nonatomic) VOSGesture *FourFingerQuadrupleTap;
@property (class, readonly, nonatomic) VOSGesture *FiveFingerSingleTap;
@property (class, readonly, nonatomic) VOSGesture *FiveFingerDoubleTap;
@property (class, readonly, nonatomic) VOSGesture *FiveFingerTripleTap;
@property (class, readonly, nonatomic) VOSGesture *FiveFingerQuadrupleTap;
@property (class, readonly, nonatomic) VOSGesture *OneFingerFlickUp;
@property (class, readonly, nonatomic) VOSGesture *OneFingerFlickDown;
@property (class, readonly, nonatomic) VOSGesture *OneFingerFlickLeft;
@property (class, readonly, nonatomic) VOSGesture *OneFingerFlickRight;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerFlickUp;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerFlickDown;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerFlickLeft;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerFlickRight;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerFlickUp;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerFlickDown;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerFlickLeft;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerFlickRight;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerDoubleTapHoldAndFlickUp;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerDoubleTapHoldAndFlickDown;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerDoubleTapHoldAndFlickLeft;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerDoubleTapHoldAndFlickRight;
@property (class, readonly, nonatomic) VOSGesture *FourFingerFlickUp;
@property (class, readonly, nonatomic) VOSGesture *FourFingerFlickDown;
@property (class, readonly, nonatomic) VOSGesture *FourFingerFlickLeft;
@property (class, readonly, nonatomic) VOSGesture *FourFingerFlickRight;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerRotateClockwise;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerRotateCounterclockwise;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerScrub;
@property (class, readonly, nonatomic) VOSGesture *OneFingerSingleTapAndHold;
@property (class, readonly, nonatomic) VOSGesture *OneFingerDoubleTapAndHold;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerSingleTapAndHold;
@property (class, readonly, nonatomic) VOSGesture *TwoFingerDoubleTapAndHold;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerSingleTapAndHold;
@property (class, readonly, nonatomic) VOSGesture *ThreeFingerDoubleTapAndHold;
@property (class, readonly, nonatomic) VOSGesture *BackTapDoubleTap;
@property (class, readonly, nonatomic) VOSGesture *BackTapTripleTap;
@property (class, readonly, nonatomic) VOSGesture *Invalid;
@property (class, readonly, nonatomic) NSSet *allGestures;
@property (class, readonly, nonatomic) NSSet *oneFingerGestures;
@property (class, readonly, nonatomic) NSSet *twoFingerGestures;
@property (class, readonly, nonatomic) NSSet *threeFingerGestures;
@property (class, readonly, nonatomic) NSSet *fourFingerGestures;
@property (class, readonly, nonatomic) NSSet *fiveFingerGestures;
@property (class, readonly, nonatomic) NSSet *conflictingZoomGestures;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *rawValue;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)_gesturesForFingerCount:(long long)a0;
+ (id)gestureWithStringValue:(id)a0;
+ (id)horizontalMirrorGestureForGesture:(id)a0;
+ (id)rtlGestureForGesture:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)_initWithRawValue:(id)a0;

@end
