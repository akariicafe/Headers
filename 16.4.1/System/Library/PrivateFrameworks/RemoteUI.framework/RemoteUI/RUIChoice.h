@class NSString, UIColor;

@interface RUIChoice : RUIElement

@property (readonly, nonatomic) unsigned long long choiceType;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)stopActivityIndicator;
- (void)pageDidChange;
- (void)startActivityIndicator;
- (id)staticValues;
- (unsigned long long)typeForChoiceString:(id)a0;

@end
