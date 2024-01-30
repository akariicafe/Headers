@class HDDeviceManager, HDSourceManager, HDUserCharacteristicsManager, HDDataCollectionManager, HDDaemon;
@protocol HDHealthDatabase, HDHealthDaemon;

@interface HDMockProfile : NSObject

@property (weak, nonatomic) HDDaemon *daemon;
@property (weak, nonatomic) id<HDHealthDaemon> healthDaemon;
@property (retain, nonatomic) id<HDHealthDatabase> healthDatabase;
@property (retain, nonatomic) HDSourceManager *healthSourceManager;
@property (retain, nonatomic) HDDeviceManager *healthDeviceManager;
@property (retain, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (retain, nonatomic) HDUserCharacteristicsManager *userCharacteristicsManager;

- (void).cxx_destruct;
- (id)profileIdentifier;
- (id)nanoSyncManager;
- (long long)profileType;

@end
