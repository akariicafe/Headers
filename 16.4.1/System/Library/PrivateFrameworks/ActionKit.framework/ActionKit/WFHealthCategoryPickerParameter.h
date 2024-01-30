@class NSArray, HKCategoryType;

@interface WFHealthCategoryPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKCategoryType *categoryType;

- (id)possibleStates;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)updatePossibleStates;

@end
