@class PUAutoAdjustmentController, NSString, PICompositionController, NSMutableArray, PUPhotoEditValuesCalculator;
@protocol PUAdjustmentsDataSourceDelegate;

@interface PUAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource>

@property (retain, nonatomic) NSMutableArray *adjustmentInfoSections;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) PUAutoAdjustmentController *autoEnhanceController;
@property (retain, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator;
@property (nonatomic) unsigned long long assetType;
@property (weak, nonatomic) id<PUAdjustmentsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)_resetEnabledStateForAutoEnhancedInfos;
- (void).cxx_destruct;
- (id)renderer;
- (void)_modifyAdjustmentForInfo:(id)a0;
- (BOOL)canModifyAdjustmentAtIndexPath:(id)a0;
- (void)setAdjustmentEnabled:(BOOL)a0 atIndexPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)modifyValue:(double)a0 atIndexPath:(id)a1;
- (id)infoForItemAtIndexPath:(id)a0;
- (void)resetInfoAtIndexPath:(id)a0;
- (void)setupWithCompositionController:(id)a0 valuesCalculator:(id)a1 autoAdjustmentController:(id)a2 assetType:(unsigned long long)a3;
- (void)_setDefaultsForInfo:(id)a0;
- (id)_newAdjustmentInfoWithIdentifier:(id)a0 adjustmentKey:(id)a1 settingKey:(id)a2 attributeKey:(id)a3;
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)a0 settingKey:(id)a1 attributeKey:(id)a2;
- (void)_createAdjustmentInfos;
- (id)_autoEnhanceAdjustmentInfo;
- (id)_lightAdjustmentInfos;
- (id)_colorAdjustmentInfos;
- (id)_detailAdjustmentInfos;
- (id)_vignetteAdjustmentInfos;
- (id)_smartBlackAndWhiteAdjustmentInfos;
- (id)_debugAdjustmentInfos;
- (void)_enableNonAutoAjustments:(BOOL)a0;
- (void)_updateAdjustmentInfos;
- (void)compositionControllerDidChange;

@end
