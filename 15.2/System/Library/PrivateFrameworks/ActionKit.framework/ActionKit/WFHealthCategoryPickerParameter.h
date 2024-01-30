@class NSArray, HKCategoryType;

@interface WFHealthCategoryPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKCategoryType *categoryType;

- (id)possibleStates;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)updatePossibleStates;

@end
