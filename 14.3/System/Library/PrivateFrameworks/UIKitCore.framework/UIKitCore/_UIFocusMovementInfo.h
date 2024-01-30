@class NSString;

@interface _UIFocusMovementInfo : NSObject <NSCopying, BSXPCCoding>

@property (nonatomic, setter=_setHeading:) unsigned long long heading;
@property (nonatomic, getter=_secondaryHeading, setter=_setSecondaryHeading:) unsigned long long secondaryHeading;
@property (nonatomic, getter=_isLooping, setter=_setLooping:) BOOL looping;
@property (nonatomic, getter=_linearHeading, setter=_setLinearHeading:) unsigned long long linearHeading;
@property (nonatomic, getter=_shouldLoadScrollableContainer, setter=_setShouldLoadScrollableContainer:) BOOL shouldLoadScrollableContainer;
@property (nonatomic, getter=_velocity, setter=_setVelocity:) struct CGVector { double dx; double dy; } velocity;
@property (nonatomic, getter=_isInitialMovement, setter=_setIsInitialMovement:) BOOL isInitialMovement;
@property (nonatomic, getter=_isVelocityBased, setter=_setIsVelocityBased:) BOOL isVelocityBased;
@property (nonatomic, getter=_fallbackMovementOriginatingFrame, setter=_setFallbackMovementOriginatingFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fallbackMovementOriginatingFrame;
@property (readonly, nonatomic) _UIFocusMovementInfo *primaryMovementInfo;
@property (readonly, nonatomic) _UIFocusMovementInfo *secondaryMovementInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_movementWithHeading:(unsigned long long)a0 linearHeading:(unsigned long long)a1 shouldLoadScrollableContainer:(BOOL)a2 isInitial:(BOOL)a3 looping:(BOOL)a4;
+ (id)_movementWithHeading:(unsigned long long)a0 linearHeading:(unsigned long long)a1 shouldLoadScrollableContainer:(BOOL)a2 isInitial:(BOOL)a3;
+ (id)_movementWithHeading:(unsigned long long)a0 isInitial:(BOOL)a1 fallbackMovementOriginatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)_movementWithHeading:(unsigned long long)a0 secondaryHeading:(unsigned long long)a1 velocity:(struct CGVector { double x0; double x1; })a2 isInitial:(BOOL)a3;
+ (BOOL)supportsSecureCoding;
+ (id)_movementWithHeading:(unsigned long long)a0 isInitial:(BOOL)a1;
+ (id)_movementWithVelocity:(struct CGVector { double x0; double x1; })a0 isInitial:(BOOL)a1;
+ (id)_movementWithHeading:(unsigned long long)a0 velocity:(struct CGVector { double x0; double x1; })a1 isInitial:(BOOL)a2;
+ (id)_movementWithHeading:(unsigned long long)a0 linearHeading:(unsigned long long)a1 isInitial:(BOOL)a2;
+ (id)_movementWithLinearHeading:(unsigned long long)a0 isInitial:(BOOL)a1 looping:(BOOL)a2;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (BOOL)_isLinearMovement;
- (void)encodeWithCoder:(id)a0;

@end
