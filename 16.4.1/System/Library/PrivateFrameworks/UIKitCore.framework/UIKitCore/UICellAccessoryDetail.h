@interface UICellAccessoryDetail : UICellAccessory

@property (copy, nonatomic) id /* block */ actionHandler;

+ (BOOL)supportsSecureCoding;

- (long long)_systemTypePlacementForHeader:(BOOL)a0;
- (BOOL)_canDirectlyUpdateExistingAccessoryViewFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (long long)_systemType;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
