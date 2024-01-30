@class UIColor, UIFont, NSNumber, UISearchTextField;

@interface _UISearchTextFieldVisualStyle : NSObject <_UIVisualStyleProviding>

@property (readonly, weak, nonatomic) UISearchTextField *searchTextField;
@property (readonly, nonatomic) BOOL usesCustomIntrinsicSize;
@property (readonly, nonatomic) double backgroundCornerRadius;
@property (readonly, nonatomic) double defaultHeight;
@property (readonly, nonatomic) double leftViewInset;
@property (readonly, nonatomic) double leftViewInsetAddition;
@property (readonly, nonatomic) double leftViewToPlaceholderCenteredMargin;
@property (readonly, nonatomic) double rightViewInset;
@property (readonly, nonatomic) double textLeadingInset;
@property (readonly, nonatomic) double textLeftInsetLegacy;
@property (readonly, nonatomic) double textRightInset;
@property (readonly, nonatomic) NSNumber *clearButtonInnerInset;
@property (readonly, nonatomic) NSNumber *clearButtonOuterInset;
@property (readonly, nonatomic) double searchResultsListButtonOffset;
@property (readonly, nonatomic) double searchBookmarkButtonOffset;
@property (readonly, nonatomic) double searchTextResultsPadding;
@property (readonly, nonatomic) UIColor *defaultLeftViewTintColor;
@property (readonly, nonatomic) UIFont *dynamicSearchFieldFont;

- (void).cxx_destruct;
- (id)initWithInstance:(id)a0;

@end
