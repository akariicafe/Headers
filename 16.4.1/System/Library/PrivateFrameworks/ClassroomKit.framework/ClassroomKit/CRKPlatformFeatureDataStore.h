@protocol CRKFeatureDataStoreProtocol;

@interface CRKPlatformFeatureDataStore : NSObject <CRKSharedFeatureDataStoreProviding>

@property (class, readonly, nonatomic) id<CRKFeatureDataStoreProtocol> sharedDataStore;

@end
