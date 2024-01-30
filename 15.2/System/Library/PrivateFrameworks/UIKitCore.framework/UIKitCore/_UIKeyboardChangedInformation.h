@class BKSAnimationFenceHandle, NSString;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) BKSAnimationFenceHandle *animationFence;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPosition;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPositionWithIAV;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardPositionWithRemoteIAV;
@property (readonly) BOOL keyboardOnScreen;
@property (nonatomic) BOOL avoidIntersectability;
@property (nonatomic) BOOL multipleScenes;
@property (nonatomic) BOOL shouldTakeSnapshot;
@property (readonly) BOOL shouldRestoreKeyboard;
@property (copy, nonatomic) NSString *sourceSceneIdentityString;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (copy, nonatomic) NSString *hostBundleIdentifier;
@property (copy, nonatomic) NSString *sourceDisplayIdentifier;
@property (copy, nonatomic) NSString *keyboardPreserveKey;

+ (id)informationForKeyboardDown;
+ (id)informationForKeyboardRestore:(id)a0;
+ (id)informationForKeyboardPreserve:(id)a0;
+ (id)animationFence;
+ (id)informationForKeyboardUp:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withIAV:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void)encodeWithCoder:(id)a0;
- (void)resetAnimationFencing;
- (id)description;
- (id)copyWithIntersectability:(BOOL)a0;
- (id)copyWithoutFence;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithKeyboardRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 iavPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 onScreen:(BOOL)a2 takeSnapshot:(BOOL)a3 fence:(id)a4;
- (id)copyWithoutIAV;

@end
