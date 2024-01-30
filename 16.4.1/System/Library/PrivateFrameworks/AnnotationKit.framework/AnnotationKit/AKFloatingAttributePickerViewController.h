@class AKController, UIView, NSArray, AKColorPaletteView, NSString, UIToolbar, UIBarButtonItem, UIColor;

@interface AKFloatingAttributePickerViewController : UIViewController <AKTextAttributesUserInterfaceItem>

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) AKColorPaletteView *colorPalette;
@property (retain, nonatomic) UIToolbar *toolbar;
@property (retain, nonatomic) UIBarButtonItem *colorPaletteButtonItem;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) NSArray *staticItems;
@property (retain, nonatomic) NSArray *rightButtonItems;
@property (nonatomic) long long tag;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorAttributeTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithController:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)valueChanged:(id)a0;
- (id)convertTextAttributes:(id)a0;
- (void)setRightButtonItems:(id)a0 animated:(BOOL)a1;
- (void)syncTextAttributesToUI:(id)a0;

@end
