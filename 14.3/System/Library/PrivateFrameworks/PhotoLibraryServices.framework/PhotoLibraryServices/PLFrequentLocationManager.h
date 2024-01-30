@class NSSet;
@protocol PLMomentGenerationDataManagement;

@interface PLFrequentLocationManager : NSObject {
    BOOL _invalidateCurrentFrequentLocations;
}

@property (weak, nonatomic) id<PLMomentGenerationDataManagement> momentGenerationDataManager;
@property (retain, nonatomic) NSSet *currentFrequentLocations;

- (void).cxx_destruct;
- (BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)a0;
- (void)invalidateCurrentFrequentLocations;
- (id)initWithMomentGenerationDataManager:(id)a0;
- (id)_createFrequentLocationsWithAllMoments:(id)a0;

@end
