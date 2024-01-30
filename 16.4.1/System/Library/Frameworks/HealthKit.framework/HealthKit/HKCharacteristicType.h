@interface HKCharacteristicType : HKObjectType

- (BOOL)_validateActivityMoveMode:(id)a0 error:(id *)a1;
- (id)_relatedSampleForInsertionWithCharacteristicValue:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (BOOL)_validateFitzpatrickSkinType:(id)a0 error:(id *)a1;
- (id)_relatedQuantityType;
- (id)_relatedCategoryType;
- (BOOL)_validateCharacteristic:(id)a0 error:(id *)a1;
- (BOOL)_validateWheelchairUse:(id)a0 error:(id *)a1;
- (id)_canoncialUnit;
- (BOOL)_validateCardioFitnessMedicationsUse:(id)a0 error:(id *)a1;
- (BOOL)_validateBiologicalSex:(id)a0 error:(id *)a1;
- (BOOL)_validateDateOfBirth:(id)a0 error:(id *)a1;
- (BOOL)_validateQuantity:(id)a0 withCompatibleUnit:(id)a1 error:(id *)a2;
- (BOOL)_validateBloodType:(id)a0 error:(id *)a1;

@end
