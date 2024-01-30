@class NSMutableDictionary, CHRecognitionSession, NSMutableSet, NSString, NSMutableArray;
@protocol CHVisualizationManagerDelegate;

@interface CHVisualizationManager : NSObject <CHStrokeGroupBasedVisualizationDelegate, CHRecognitionSessionObserver>

@property (readonly, nonatomic) NSMutableSet *_enabledVisualizationIDs;
@property (readonly, nonatomic) NSMutableArray *_activeVisualizationIDs;
@property (readonly, nonatomic) NSMutableDictionary *_activeVisualizationsByID;
@property (readonly, nonatomic) NSMutableDictionary *_strokeGroupIndexByAncestorID;
@property (nonatomic) BOOL _registeredAsChangeObserver;
@property (nonatomic) BOOL _registeredAsInputDrawingsClient;
@property (readonly, nonatomic) CHRecognitionSession *recognitionSession;
@property (nonatomic) id<CHVisualizationManagerDelegate> delegate;
@property (nonatomic) BOOL statusReportingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableRecognitionSessionStatusKeys;
+ (id)localizedNameForRecognitionSessionStatusKey:(id)a0;
+ (Class)_classForVisualizationIdentifier:(id)a0;
+ (id)availableVisualizationIdentifiers;
+ (id)localizedNameForVisualizationIdentifier:(id)a0;
+ (struct CGColor { } *)newColorForVisualizedItemAtIndex:(long long)a0;
+ (BOOL)variableHeightForRecognitionSessionStatusKey:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)valueForRecognitionStatusKey:(id)a0;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithRecognitionSession:(id)a0;
- (void)recognitionSessionDidChangeStatus:(id)a0;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (void)_addVisualizationForIdentifier:(id)a0;
- (BOOL)_isActiveVisualizationForIdentifier:(id)a0;
- (void)_removeVisualizationForIdentifier:(id)a0;
- (void)_updateInstalledVisualizations;
- (void)_updateKnownStrokeGroupIndexes;
- (void)_updateSessionRegistration;
- (BOOL)isEnabledVisualizationForIdentifier:(id)a0;
- (void)setEnabled:(BOOL)a0 forVisualizationIdentifier:(id)a1;
- (void)toggleSelectiveVisualizationsAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)visualization:(id)a0 needsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (long long)visualizationIndexForStrokeGroup:(id)a0;
- (void)visualizationNeedsDisplay:(id)a0;

@end
