@class UIImageSymbolConfiguration, NSArray, NSString, UIImage, VKCBaseDataDetectorElement, DDUIAction, UIMenu;
@protocol VKCActionInfoButtonDelegate;

@interface VKCActionInfoButton : UIButton

@property (retain, nonatomic) VKCBaseDataDetectorElement *representedElement;
@property (retain, nonatomic) NSArray *allUnfilteredElements;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *menuImage;
@property (weak, nonatomic) id<VKCActionInfoButtonDelegate> delegate;
@property (retain, nonatomic) DDUIAction *defaultAction;
@property (retain, nonatomic) UIMenu *customMenu;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;

+ (id)buttonWithImage:(id)a0 text:(id)a1;

- (void)tearDown;
- (long long)overrideUserInterfaceStyle;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)hasAction:(SEL)a0;
- (id)translucentSelectedButtonConfiguration;
- (id)translucentButtonConfiguration;
- (id)dataDetectorContext;
- (void)performDefaultElementAction;
- (id)filledButtonConfiguration;
- (void)vk_addTarget:(id)a0 action:(SEL)a1;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;

@end
