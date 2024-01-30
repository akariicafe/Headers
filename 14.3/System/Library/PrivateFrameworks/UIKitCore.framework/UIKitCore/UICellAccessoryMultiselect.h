@class UIColor;

@interface UICellAccessoryMultiselect : UICellAccessory

@property (retain, nonatomic) UIColor *backgroundColor;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)_identifier;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;

@end
