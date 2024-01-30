@class NSArray, HKCategoryType;

@interface WFHealthCategoryAdditionalPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (retain, nonatomic) HKCategoryType *categoryType;

- (id)localizedLabel;
- (id)possibleStates;
- (void).cxx_destruct;
- (BOOL)isHidden;
- (id)localizedLabelForPossibleState:(id)a0;
- (void)updatePossibleStates;

@end
