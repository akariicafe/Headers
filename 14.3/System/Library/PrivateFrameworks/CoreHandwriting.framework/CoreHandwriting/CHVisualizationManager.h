@class NSMutableDictionary, CHRecognitionSession, NSMutableSet, NSString, NSMutableArray;
@protocol CHVisualizationManagerDelegate;

@interface CHVisualizationManager : NSObject <CHStrokeGroupBasedVisualizationDelegate, CHRecognitionSessionObserver>

@property (readonly, retain, nonatomic) NSMutableSet *_enabledVisualizationIDs;
@property (readonly, retain, nonatomic) NSMutableArray *_activeVisualizationIDs;
@property (readonly, retain, nonatomic) NSMutableDictionary *_activeVisualizationsByID;
@property (readonly, retain, nonatomic) NSMutableDictionary *_strokeGroupIndexByAncestorID;
@property (nonatomic) BOOL _registeredAsChangeObserver;
@property (nonatomic) BOOL _registeredAsInputDrawingsClient;
@property (readonly, retain, nonatomic) CHRecognitionSession *recognitionSession;
@property (nonatomic) id<CHVisualizationManagerDelegate> delegate;
@property (nonatomic) BOOL statusReportingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)availableRecognitionSessionStatusKeys;
+ (id)localizedNameForRecognitionSessionStatusKey:(id)a0;
+ (struct CGColor { } *)newColorForVisualizedItemAtIndex:(long long)a0;
+ (id)availableVisualizationIdentifiers;
+ (Class)_classForVisualizationIdentifier:(id)a0;
+ (id)localizedNameForVisualizationIdentifier:(id)a0;
+ (BOOL)variableHeightForRecognitionSessionStatusKey:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)a0;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)valueForRecognitionStatusKey:(id)a0;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)a0;
- (void)recognitionSessionDidChangeStatus:(id)a0;
- (long long)visualizationIndexForStrokeGroup:(id)a0;
- (void)visualizationNeedsDisplay:(id)a0;
- (void)visualization:(id)a0 needsDisplayInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isEnabledVisualizationForIdentifier:(id)a0;
- (void)_updateInstalledVisualizations;
- (void)_updateSessionRegistration;
- (BOOL)_isActiveVisualizationForIdentifier:(id)a0;
- (void)_addVisualizationForIdentifier:(id)a0;
- (void)_removeVisualizationForIdentifier:(id)a0;
- (void)_updateKnownStrokeGroupIndexes;
- (void)setEnabled:(BOOL)a0 forVisualizationIdentifier:(id)a1;
- (void)toggleSelectiveVisualizationsAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
