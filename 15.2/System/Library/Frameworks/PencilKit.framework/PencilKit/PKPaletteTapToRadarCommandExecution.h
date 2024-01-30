@class PKPaletteTapToRadarConfiguration;

@interface PKPaletteTapToRadarCommandExecution : NSObject <UIEditingOverlayInteractionWithView>

@property (readonly, nonatomic) PKPaletteTapToRadarConfiguration *configuration;

+ (id)commandExecutionWithConfiguration:(id)a0;

- (void)run;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
