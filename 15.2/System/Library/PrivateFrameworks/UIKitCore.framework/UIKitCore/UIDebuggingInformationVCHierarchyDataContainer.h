@class UIViewController;

@interface UIDebuggingInformationVCHierarchyDataContainer : NSObject

@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long level;

- (id)initWithViewController:(id)a0 atLevel:(long long)a1;
- (void).cxx_destruct;

@end
