@class RUIElement, NSString, RUISubHeaderElement, NSArray, UIImage, RUIPage, NSMutableArray, RUIChoiceView, RUIObjectModel;

@interface RUIChoiceViewElement : RUIElement <RUITopLevelPageElement> {
    RUIChoiceView *_view;
    NSMutableArray *_choices;
    UIImage *_image;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (weak, nonatomic) RUIPage *page;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (retain, nonatomic) RUIElement *helpLinkElement;
@property (readonly, nonatomic) NSArray *choices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sourceURL;
- (void).cxx_destruct;
- (void)populatePostbackDictionary:(id)a0;
- (id)view;
- (id)titleLabel;
- (void)setTitle:(id)a0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)setImageAlignment:(int)a0;
- (void)setImage:(id)a0;
- (id)viewForElementIdentifier:(id)a0;
- (void)choiceViewTappedHelpLink:(id)a0;
- (void)choiceView:(id)a0 tappedChoiceAtIndex:(unsigned long long)a1;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (id)_bigChoiceColor;
- (id)_smallChoiceColor;
- (id)_choiceColorWithAttribute:(id)a0 atIndex:(int)a1;
- (void)addChoiceElement:(id)a0;

@end
