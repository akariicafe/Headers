@class UIColor;

@interface UICellAccessoryMultiselect : UICellAccessory

@property (retain, nonatomic) UIColor *backgroundColor;

+ (BOOL)supportsSecureCoding;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (long long)_systemType;
- (id)_identifier;
- (id)init;

@end
