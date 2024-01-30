@class UIColor;

@interface UICellAccessoryInsert : UICellAccessory

@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (long long)_systemType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_identifier;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
