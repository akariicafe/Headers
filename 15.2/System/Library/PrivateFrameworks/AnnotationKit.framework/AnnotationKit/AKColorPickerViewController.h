@class UIColor, AKController, NSString, AKColorPaletteView;

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem>

@property (weak, nonatomic) AKController *controller;
@property (retain, nonatomic) AKColorPaletteView *colorPalette;
@property (nonatomic) long long tag;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorAttributeTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)valueChanged:(id)a0;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (id)convertTextAttributes:(id)a0;
- (void)syncTextAttributesToUI:(id)a0;

@end
