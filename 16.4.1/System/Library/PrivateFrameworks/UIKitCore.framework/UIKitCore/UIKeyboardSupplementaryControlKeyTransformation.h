@class NSString;

@interface UIKeyboardSupplementaryControlKeyTransformation : NSObject <UIKeyboardKeyplaneTransformation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_totalKeyPaddingForOrientation:(long long)a0;
+ (double)_keyplanePaddingForOrientation:(long long)a0;
+ (id)_cachedUndoOrRedoKeyForKeyplane:(id)a0;
+ (double)_derivedFiveRowControlKeyWidthForRow:(unsigned long long)a0 keysForRow:(id)a1 context:(id)a2;
+ (double)_derivedLeadingControlKeyWidthForRow:(unsigned long long)a0 keysForRow:(id)a1 context:(id)a2;
+ (double)_derivedTrailingControlKeyWidthForRow:(unsigned long long)a0 orientation:(long long)a1;
+ (double)_keyPitchForKeyplane:(id)a0;
+ (double)_keyplanePaddingForOrientation:(long long)a0 row:(unsigned long long)a1;
+ (unsigned long long)_numberOfKeysInRow:(id)a0 firstKey:(id *)a1 lastKey:(id *)a2;
+ (double)_scaledDerivedLeadingControlKeyWidth:(double)a0 forKeysForRow:(id)a1 keyCount:(long long)a2 numberOfKeysInSpecification:(long long)a3 context:(id)a4;
+ (id)_supplementaryControlKeySetForOrientation:(long long)a0 context:(id)a1;
+ (id)_supplementaryControlKeyWithName:(id)a0 context:(id)a1;
+ (id)_supplementaryScriptSwitchKeyWithContext:(id)a0;
+ (id)_supplementaryShiftKeysWithContext:(id)a0;
+ (void)adjustHorizontalPaddingForKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (id)cachedControlKeySetsForTransformationContext:(id)a0;
+ (struct CGSize { double x0; double x1; })layoutScaleFactorForContext:(id)a0;
+ (id)transformKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (void)transformKeysForFiveRowKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (void)transformKeysForFourRowKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (void)transformKeysForHandwritingKeyplane:(id)a0 withTransformationContext:(id)a1;
+ (void)transformKeysForVietnameseKeyPlane:(id)a0 withTransformationContext:(id)a1;
+ (void)transformLastRowKeysForKeyplane:(id)a0 row:(unsigned long long)a1 withTransformationContext:(id)a2;
+ (id)transformationIdentifier;


@end
