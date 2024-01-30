@class NSDictionary, NUComposition;

@interface PEAdjustmentPreset : PEEditAction {
    NUComposition *_composition;
}

@property (readonly, nonatomic) NUComposition *composition;
@property (readonly, nonatomic) NSDictionary *serializedDictionary;
@property (readonly, nonatomic) BOOL isAutoEnhanceEnabled;
@property (readonly, nonatomic) BOOL needsGeometryAdjustments;
@property (readonly, nonatomic) long long autoType;

+ (void)sanitizeCompositionController:(id)a0;

- (id)analyticsPayload;
- (long long)actionType;
- (void).cxx_destruct;
- (id)initWithPropertyListDictionary:(id)a0;
- (id)initWithCompositionController:(id)a0;
- (void)applyToCompositionController:(id)a0 editSource:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isCinematicEditSource:(id)a0;
- (id)_serializeCompositionController:(id)a0;
- (void)applyToCompositionController:(id)a0 invalidAdjustmentKeys:(id)a1 completion:(id /* block */)a2;
- (void)applyToLoadResult:(id)a0 completion:(id /* block */)a1;

@end
