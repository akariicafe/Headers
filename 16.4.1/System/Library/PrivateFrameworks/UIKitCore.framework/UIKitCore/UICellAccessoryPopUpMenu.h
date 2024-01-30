@class UIMenu;

@interface UICellAccessoryPopUpMenu : UICellAccessory

@property (readonly, nonatomic) UIMenu *_internalMenu;
@property (readonly, copy, nonatomic) UIMenu *menu;
@property (copy, nonatomic) id /* block */ selectedElementDidChangeHandler;

+ (BOOL)supportsSecureCoding;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (long long)_systemType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithMenu:(id)a0;

@end
