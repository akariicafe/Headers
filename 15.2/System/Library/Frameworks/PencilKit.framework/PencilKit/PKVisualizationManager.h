@class NSString, CHVisualizationManager;
@protocol PKVisualizationManager;

@interface PKVisualizationManager : NSObject <CHVisualizationManagerDelegate>

@property (retain, nonatomic) CHVisualizationManager *chVisualizationManager;
@property (nonatomic) BOOL recognitionStatusReportingEnabled;
@property (weak, nonatomic) id<PKVisualizationManager> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableRecognitionStatusKeys;
+ (id)localizedNameForRecognitionStatusKey:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)a0;
- (void)visualizationManager:(id)a0 needsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)visualizationManagerNeedsDisplay:(id)a0;
- (void)visualizationManagerDidUpdateSessionStatus:(id)a0;
- (id)valueForRecognitionStatusKey:(id)a0;

@end
