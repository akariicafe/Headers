@class NSSet;
@protocol PLMomentGenerationDataManagement;

@interface PLFrequentLocationManager : NSObject {
    BOOL _invalidateCurrentFrequentLocations;
}

@property (weak, nonatomic) id<PLMomentGenerationDataManagement> momentGenerationDataManager;
@property (retain, nonatomic) NSSet *currentFrequentLocations;

- (id)_createFrequentLocationsWithAllMoments:(id)a0;
- (void).cxx_destruct;
- (id)initWithMomentGenerationDataManager:(id)a0;
- (void)invalidateCurrentFrequentLocations;
- (BOOL)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)a0;

@end
