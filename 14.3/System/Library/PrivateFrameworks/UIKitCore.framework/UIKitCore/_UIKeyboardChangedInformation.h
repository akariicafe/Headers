@class BKSAnimationFenceHandle, NSString;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) BKSAnimationFenceHandle *animationFence;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPosition;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPositionWithIAV;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPositionWithRemoteIAV;
@property (readonly) BOOL keyboardOnScreen;
@property (readonly) BOOL avoidIntersectability;
@property (nonatomic) BOOL shouldTakeSnapshot;
@property (copy, nonatomic) NSString *sourceSceneIdentityString;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (copy, nonatomic) NSString *sourceDisplayIdentifier;

+ (id)animationFence;
+ (id)informationForKeyboardDown;
+ (id)informationForKeyboardUp:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withIAV:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithIntersectability:(BOOL)a0;
- (void)resetAnimationFencing;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)copyWithoutFence;
- (id)initWithKeyboardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iavPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onScreen:(BOOL)a2 takeSnapshot:(BOOL)a3 fence:(id)a4;
- (id)copyWithoutIAV;
- (void)encodeWithCoder:(id)a0;

@end
