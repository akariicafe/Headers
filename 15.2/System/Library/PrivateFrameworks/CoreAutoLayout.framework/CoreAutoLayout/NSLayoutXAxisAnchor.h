@interface NSLayoutXAxisAnchor : NSLayoutAnchor

- (BOOL)validateOtherAttribute:(long long)a0;
- (id)constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintLessThanOrEqualToSystemSpacingAfterAnchor:(id)a0 multiplier:(double)a1;
- (id)constraintEqualToSystemSpacingAfterAnchor:(id)a0 multiplier:(double)a1;
- (id)anchorWithOffsetToAnchor:(id)a0;
- (long long)_directionAbstraction;
- (BOOL)isCompatibleWithAnchor:(id)a0;
- (id)anchorByOffsettingWithDimension:(id)a0 multiplier:(double)a1 constant:(double)a2;
- (id)anchorByOffsettingWithDimension:(id)a0;
- (id)anchorByOffsettingWithConstant:(double)a0;
- (id)offsetTo:(id)a0;
- (id)distanceTo:(id)a0;
- (id)offsetByDimension:(id)a0 times:(double)a1 plus:(double)a2;
- (id)offsetByDimension:(id)a0;
- (id)offsetBy:(double)a0;
- (BOOL)_validateOtherXAxisAnchorDirectionAbstraction:(long long)a0;

@end
