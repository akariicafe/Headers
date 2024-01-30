@class NSArray, NSDictionary, NSSet, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PHUserFeedbackDataCache : NSObject {
    NSObject<OS_os_log> *_userFeedbackLogging;
    PHPhotoLibrary *_photoLibrary;
}

@property (retain, nonatomic) NSArray *importantPersons;
@property (retain, nonatomic) NSDictionary *userFeedbackTypeByPersonUUID;
@property (retain, nonatomic) NSSet *holidayNamesWithNegativeFeedback;
@property (retain, nonatomic) NSSet *areaNamesWithNegativeFeedback;
@property (retain, nonatomic) NSSet *datesWithNegativeFeedback;
@property (retain, nonatomic) NSSet *dateIntervalsWithNegativeFeedback;
@property (retain, nonatomic) NSSet *locationsWithNegativeFeedback;
@property (retain, nonatomic) NSSet *deniedFeaturedPhotoUUIDs;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (BOOL)_isUserFeedbackFeatureFlagEnabled;
+ (id)_emptyUserFeedbackDataCache;

- (id)initWithPhotoLibrary:(id)a0;
- (void)_loadDeniedFeaturedPhotoUUIDsWithPhotoLibrary:(id)a0;
- (void)_loadPersonFeedbackDataWithPhotoLibrary:(id)a0;
- (void)loadDataWithPhotoLibrary:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 importantPersons:(id)a1;
- (void)_loadMemoryFeedbackDataWithPhotoLibrary:(id)a0;
- (id)_confidentMergeCandidateUUIDsForPerson:(id)a0;
- (void).cxx_destruct;

@end
