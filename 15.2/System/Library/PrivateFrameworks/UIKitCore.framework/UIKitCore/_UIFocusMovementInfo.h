@class NSString;

@interface _UIFocusMovementInfo : NSObject <NSCopying, BSXPCCoding>

@property (nonatomic, setter=_setHeading:) unsigned long long heading;
@property (nonatomic, getter=_isLooping, setter=_setLooping:) BOOL looping;
@property (nonatomic, getter=_linearHeading, setter=_setLinearHeading:) unsigned long long linearHeading;
@property (nonatomic, getter=_shouldLoadScrollableContainer, setter=_setShouldLoadScrollableContainer:) BOOL shouldLoadScrollableContainer;
@property (nonatomic, getter=_velocity, setter=_setVelocity:) struct CGVector { double dx; double dy; } velocity;
@property (nonatomic, getter=_isInitialMovement, setter=_setIsInitialMovement:) BOOL isInitialMovement;
@property (nonatomic, getter=_isVelocityBased, setter=_setIsVelocityBased:) BOOL isVelocityBased;
@property (nonatomic, getter=_fallbackMovementOriginatingFrame, setter=_setFallbackMovementOriginatingFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fallbackMovementOriginatingFrame;
@property (nonatomic, getter=_groupFilter, setter=_setGroupFilter:) long long groupFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_movementWithHeading:(unsigned long long)a0 isInitial:(BOOL)a1 fallbackMovementOriginatingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)_movementWithHeading:(unsigned long long)a0 isInitial:(BOOL)a1;

- (id)initWithXPCDictionary:(id)a0;
- (id)initWithHeading:(unsigned long long)a0 linearHeading:(unsigned long long)a1 isInitial:(BOOL)a2 shouldLoadScrollableContainer:(BOOL)a3 looping:(BOOL)a4 groupFilter:(long long)a5;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithHeading:(unsigned long long)a0 velocity:(struct CGVector { double x0; double x1; })a1 isInitial:(BOOL)a2 shouldLoadScrollableContainer:(BOOL)a3 groupFilter:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isLinearMovement;

@end
