@class UIColor;

@interface UICellAccessoryInsert : UICellAccessory

@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;

@end
