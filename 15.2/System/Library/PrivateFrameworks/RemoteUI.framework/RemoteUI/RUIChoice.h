@class NSString, UIColor;

@interface RUIChoice : RUIElement

@property (readonly, nonatomic) unsigned long long choiceType;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIColor *tintColor;

- (void).cxx_destruct;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (unsigned long long)typeForChoiceString:(id)a0;

@end
