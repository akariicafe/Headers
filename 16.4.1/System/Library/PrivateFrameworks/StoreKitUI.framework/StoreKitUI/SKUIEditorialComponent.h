@class NSString, NSArray, NSAttributedString, SKUILabelViewElement;

@interface SKUIEditorialComponent : SKUIPageComponent

@property (readonly, nonatomic) SKUILabelViewElement *viewElement;
@property (readonly, nonatomic, getter=_usesLockupTitle) BOOL _usesLockupTitle;
@property (readonly, nonatomic) NSAttributedString *bodyAttributedText;
@property (readonly, nonatomic) NSString *bodyText;
@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) struct SKUIEditorialStyle { long long alignment; long long bodyFontWeight; float bodyFontSize; float linkSpacing; long long titleFontWeight; float titleFontSize; float titleSpacing; } editorialStyle;
@property (readonly, nonatomic) NSArray *links;
@property (readonly, nonatomic) long long maximumBodyLines;

- (long long)componentType;
- (void).cxx_destruct;
- (void)_setTitleText:(id)a0;
- (id)initWithBrickRoomText:(id)a0;
- (id)initWithCustomPageContext:(id)a0;
- (id)initWithUberText:(id)a0;
- (id)initWithViewElement:(id)a0;

@end
