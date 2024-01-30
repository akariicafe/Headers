@class ATXFreeMomentDataSource;

@interface ATXPhoneUnlockFeaturizer : NSObject {
    ATXFreeMomentDataSource *_freeMomentDataSource;
}

- (void).cxx_destruct;
- (id)initWithFreeMomentDataSource:(id)a0;
- (void)updateFeatureVectorWithPhoneUnlockEvents:(id)a0;

@end
