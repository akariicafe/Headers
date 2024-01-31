@interface CNPropertyGroupAddressingGrammarItem : CNPropertyGroupItem

@property (nonatomic) BOOL wasAdded;
@property (readonly, nonatomic) BOOL shouldShowLanguageLabel;

+ (id)emptyValueForLabel:(id)a0;
+ (id)propertyGroupItemWithLabeledValue:(id)a0 group:(id)a1 contact:(id)a2;

- (BOOL)modified;
- (id)displayLabel;
- (BOOL)canReorder;
- (id)displayStringForValue:(id)a0;
- (BOOL)shouldDisableLabelButton;
- (BOOL)showValueWithLabelStyle;

@end
