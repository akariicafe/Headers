@class UIResponder, CNPropertyGroupItem;
@protocol CNPropertyCellDelegate, CNPresenterDelegate;

@interface CNPropertyCell : CNLabeledCell

@property (weak, nonatomic) id property;
@property (readonly, nonatomic) CNPropertyGroupItem *propertyItem;
@property (readonly, nonatomic) UIResponder *firstResponderItem;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL ignoreSuggested;
@property (nonatomic) BOOL forceSuggested;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (nonatomic, getter=isHighlightedProperty) BOOL highlightedProperty;
@property (nonatomic, getter=isImportant) BOOL important;
@property (readonly, nonatomic) BOOL supportsTintColorValue;
@property (readonly, nonatomic) BOOL supportsValueColorUsesLabelColor;
@property (nonatomic) double labelWidth;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;
@property (weak, nonatomic) id<CNPresenterDelegate> presentingDelegate;

+ (id)labelStringFromAppName:(id)a0 andPropertyLabel:(id)a1;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)copy:(id)a0;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)labelString;
- (void)setCardGroupItem:(id)a0;
- (id)valueString;
- (void)performDefaultAction;
- (void)performAccessoryAction;
- (void)setPropertyItem:(id)a0;
- (BOOL)shouldShowSuggestionOrigin;
- (void)updateWithPropertyItem:(id)a0;
- (void)updateValueWithPropertyItem:(id)a0;

@end
