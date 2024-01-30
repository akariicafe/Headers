@class NSString, NSDictionary, UIImageView, UILabel, UIView;
@protocol ABText;

@interface CNLabeledCell : CNContactCell {
    NSDictionary *_labelTextAttributes;
    NSDictionary *_valueTextAttributes;
}

@property (readonly, nonatomic) UIView<ABText> *labelView;
@property (readonly, nonatomic) UIView<ABText> *valueView;
@property (nonatomic) BOOL labelViewNeedsHuggingContent;
@property (nonatomic) BOOL valueViewNeedsHuggingContent;
@property (readonly, nonatomic) UIView *rightMostView;
@property (readonly, nonatomic) UILabel *standardLabelView;
@property (readonly, nonatomic) UILabel *standardValueView;
@property (readonly, nonatomic) NSString *labelString;
@property (readonly, nonatomic) NSString *valueString;
@property (readonly, nonatomic) double valueViewBottomMargin;
@property (copy, nonatomic) NSDictionary *labelTextAttributes;
@property (copy, nonatomic) NSDictionary *valueTextAttributes;
@property (readonly, nonatomic) double chevronWidth;
@property (readonly, nonatomic) UIImageView *chevron;

+ (BOOL)wantsHorizontalLayout;
+ (BOOL)wantsStandardConstraints;
+ (BOOL)wantsChevron;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)allowsCellSelection;
- (void).cxx_destruct;
- (void)addChevron;
- (double)minCellHeight;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)tintColorDidChange;
- (void)removeChevron;
- (BOOL)displaysCellSelectionState;
- (id)constantConstraintsForStandardLayout;
- (id)variableConstraintsForStandardLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)variableConstraintsForVerticalLayout;
- (id)constantConstraintsForHorizontalLayout;
- (id)variableConstraintsForHorizontalLayout;

@end
