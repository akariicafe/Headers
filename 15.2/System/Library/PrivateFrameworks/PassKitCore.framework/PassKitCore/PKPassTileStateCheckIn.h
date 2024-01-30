@interface PKPassTileStateCheckIn : PKPassTileState

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)createResolvedStateWithBundle:(id)a0 privateBundle:(id)a1;
- (BOOL)isEqualToUnresolvedState:(id)a0;
- (id)initWithCoder:(id)a0;

@end
