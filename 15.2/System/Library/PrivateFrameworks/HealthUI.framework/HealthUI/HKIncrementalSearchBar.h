@class NSString, _SearchBarContent;
@protocol HKIncrementalSearchBarDelegate;

@interface HKIncrementalSearchBar : UIView

@property (readonly, nonatomic) _SearchBarContent *searchBarContent;
@property (retain, nonatomic) id<HKIncrementalSearchBarDelegate> searchBarDelegate;
@property (retain, nonatomic) NSString *searchText;
@property (retain, nonatomic) NSString *matchDisplayText;

+ (id)regularExpressionFromString:(id)a0 quoteForJavascript:(BOOL)a1 caseless:(BOOL *)a2;
+ (BOOL)_hasUppercaseCharacters:(id)a0;
+ (id)_patternFromSearchString:(id)a0 quoteForJavascript:(BOOL)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)inputAccessoryView;
- (void).cxx_destruct;
- (id)init;
- (BOOL)canBecomeFirstResponder;
- (BOOL)searchIsActive;
- (void)dealloc;
- (void)activateSearch:(BOOL)a0;
- (void)setUpEnabled:(BOOL)a0;
- (void)setDownEnabled:(BOOL)a0;
- (void)setMatchDisplayVisible:(BOOL)a0;
- (void)searchKeyboardDidHide:(id)a0;
- (BOOL)keyboardIsUp;
- (BOOL)keyboardIsDown;
- (void)_lowerKeyboard;
- (void)doneAction:(id)a0;

@end
