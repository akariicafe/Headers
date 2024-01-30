@interface _UIKeyboardIndirectTextSelectionGestureState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (nonatomic) long long state;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic) unsigned long long flickDirection;
@property (nonatomic) BOOL isShiftKeyBeingHeld;
@property (nonatomic) unsigned long long touchCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
