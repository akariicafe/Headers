@class UIColor, CCUIContentModuleContext, NSString, UIImage, UIViewController, NSHashTable, CCUICAPackageDescription;
@protocol CCUIContentModuleBackgroundViewController, CCUIContentModuleContentViewController;

@interface CCUIToggleModule : NSObject <CCUIContentModule> {
    NSHashTable *_contentViewControllers;
}

@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, copy, nonatomic) UIImage *iconGlyph;
@property (readonly, copy, nonatomic) UIImage *selectedIconGlyph;
@property (readonly, copy, nonatomic) UIColor *selectedColor;
@property (readonly, copy, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (readonly, copy, nonatomic) NSString *glyphState;
@property (readonly, nonatomic) double glyphScale;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)iconGlyph;
- (void)refreshState;
- (id)contentViewControllerForContext:(id)a0;
- (void)reconfigureView;
- (id)selectedColor;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)glyphPackage;
- (id)selectedIconGlyph;

@end
