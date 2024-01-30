@class NSString, NSArray, UIMenu;

@interface WFMenu : NSObject

@property (readonly, nonatomic) UIMenu *platformMenu;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *elements;
@property (nonatomic) BOOL shouldDisplayInFixedOrder;

- (void).cxx_destruct;
- (id)initWithElements:(id)a0;
- (id)initWithTitle:(id)a0 elements:(id)a1;
- (id)uiMenuElementForWFMenuElement:(id)a0 shouldShowState:(BOOL)a1;

@end
