@class PUAdjustmentInfo, NSString, NSMutableDictionary, PUPhotoEditValuesCalculator, NSMutableArray, PICompositionController;
@protocol PUCropPerspectiveAdjustmentsDataSourceDelegate;

@interface PUCropPerspectiveAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource> {
    long long _orientation;
    PUAdjustmentInfo *_straightenAngleInfo;
    PUAdjustmentInfo *_pitchAngleInfo;
    PUAdjustmentInfo *_yawAngleInfo;
    NSMutableDictionary *_valueScaleForKey;
}

@property (retain, nonatomic) NSMutableArray *adjustmentInfoSections;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator;
@property (weak, nonatomic) id<PUCropPerspectiveAdjustmentsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (void)setOrientation:(long long)a0;
- (id)renderer;
- (id)init;
- (void)_modifyAdjustmentForInfo:(id)a0;
- (BOOL)canModifyAdjustmentAtIndexPath:(id)a0;
- (void)setAdjustmentEnabled:(BOOL)a0 atIndexPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)modifyValue:(double)a0 atIndexPath:(id)a1;
- (id)infoForItemAtIndexPath:(id)a0;
- (void)resetInfoAtIndexPath:(id)a0;
- (void)setupWithCompositionController:(id)a0 valuesCalculator:(id)a1;
- (void)_setDefaultsForInfo:(id)a0;
- (id)_newAdjustmentInfoWithIdentifier:(id)a0 adjustmentKey:(id)a1 settingKey:(id)a2 attributeKey:(id)a3;
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)a0 settingKey:(id)a1 attributeKey:(id)a2;
- (void)_createAdjustmentInfos;
- (void)_enableNonAutoAjustments:(BOOL)a0;
- (void)_updateAdjustmentInfos;
- (void)compositionControllerDidChange;
- (id)_geometryAdjustmentInfos;

@end
