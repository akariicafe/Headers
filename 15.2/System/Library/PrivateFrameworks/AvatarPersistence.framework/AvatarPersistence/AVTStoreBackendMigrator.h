@class NSString, AVTCoreEnvironment;
@protocol AVTUILogger;

@interface AVTStoreBackendMigrator : NSObject <AVTStoreBackendMigrator>

@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
