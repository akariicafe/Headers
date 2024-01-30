@class NSArray;
@protocol HFCharacteristicValueSource;

@interface HFDemoModeAccessoryManager : NSObject

@property (retain, nonatomic) NSArray *demoAccessories;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;

+ (id)sharedManager;
+ (id)demoLiveStreamURLForCameraName:(id)a0;
+ (BOOL)isPressDemoModeEnabled;
+ (id)_clipStartDateFromComponents:(id)a0 today:(id)a1;
+ (id)_demoClipWithURL:(id)a0 duration:(double)a1 cameraProfile:(id)a2;
+ (id)_eventsFromString:(id)a0 startDate:(id)a1 cameraProfile:(id)a2;
+ (id)accessoryProfileName:(id)a0;
+ (id)accessoryWithContentsOfDictionary:(id)a0 forHome:(id)a1;
+ (id)clipsForCameraProfile:(id)a0;
+ (id)configurationProfileFromAccessoryType:(id)a0;
+ (id)demoModeDirectoryURL;
+ (id)demoSnapshotURLForCameraName:(id)a0;
+ (id)demoURLWithCameraName:(id)a0 fileName:(id)a1 extension:(id)a2;
+ (id)imageIconDescriptorFromDictionary:(id)a0;
+ (BOOL)isInternalAccessoryType:(id)a0;
+ (BOOL)isValidExternalType:(id)a0;
+ (id)profileURLForDemoModeAccessoryName:(id)a0;

- (id)accessories;
- (void).cxx_destruct;
- (void)saveAccessories;
- (void)dispatchUpdateMessageForAccessory:(id)a0;
- (id)initWithNullValueSource:(id)a0;

@end
