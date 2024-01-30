@class NSArray, UIViewController;

@interface SHSheetOptionsViewContext : NSObject

@property (copy, nonatomic) NSArray *customizationGroups;
@property (weak, nonatomic) UIViewController *itemPreviewViewController;

- (id)description;
- (id)initWithCustomizationGroups:(id)a0;
- (void).cxx_destruct;

@end
