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

+ (BOOL)wantsChevron;
+ (BOOL)wantsHorizontalLayout;
+ (BOOL)wantsStandardConstraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (void)addChevron;
- (BOOL)allowsCellSelection;
- (id)constantConstraints;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForStandardLayout;
- (id)constantConstraintsForVerticalLayout;
- (BOOL)displaysCellSelectionState;
- (double)minCellHeight;
- (void)removeChevron;
- (id)variableConstraints;
- (id)variableConstraintsForHorizontalLayout;
- (id)variableConstraintsForStandardLayout;
- (id)variableConstraintsForVerticalLayout;

@end
