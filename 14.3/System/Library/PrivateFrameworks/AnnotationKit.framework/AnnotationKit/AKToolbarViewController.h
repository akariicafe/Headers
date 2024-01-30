@class AKController;

@interface AKToolbarViewController : UIViewController

@property (weak) AKController *controller;
@property (readonly) BOOL isPresentingPopover;

+ (id)imageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)_imageNameForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)titleForToolbarButtonItemOfType:(unsigned long long)a0;
+ (id)alternateImageForToolbarButtonItemOfType:(unsigned long long)a0;
+ (long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)a0;

- (void)teardown;
- (void).cxx_destruct;
- (id)initWithController:(id)a0;
- (void)revalidateItems;
- (void)setFillColorUIDisplayToColor:(id)a0;
- (void)setStrokeColorUIDisplayToColor:(id)a0;
- (id)_toolbarButtonItemOfType:(unsigned long long)a0;

@end
