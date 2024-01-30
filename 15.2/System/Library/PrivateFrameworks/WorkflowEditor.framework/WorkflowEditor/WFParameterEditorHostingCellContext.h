@class WFModuleAppearance, UITraitCollection, WFParameterEditorHostingCell;
@protocol WFComponentNavigationContext;

@interface WFParameterEditorHostingCellContext : NSObject

@property (retain, nonatomic) id<WFComponentNavigationContext> navigationContext;
@property (weak, nonatomic) WFParameterEditorHostingCell *cell;
@property (retain, nonatomic) WFModuleAppearance *appearance;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void).cxx_destruct;

@end
