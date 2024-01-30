@class HMHomeManagerConfiguration;
@protocol HFHomeManagerCreatorDelegate, HFHomeConfigurationStatus;

@interface HFHomeManagerCreator : NSObject

@property (nonatomic) long long hostProcessType;
@property (nonatomic) unsigned long long creationPolicy;
@property (retain, nonatomic) id<HFHomeConfigurationStatus> homeStatus;
@property (weak, nonatomic) id<HFHomeManagerCreatorDelegate> delegate;
@property (copy, nonatomic) HMHomeManagerConfiguration *configuration;
@property (nonatomic) BOOL allowCreationInTest;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_homeManagerCreationPolicy;
- (id)initWithHostProcess:(long long)a0 configuration:(id)a1 homeStatus:(id)a2 delegate:(id)a3;
- (BOOL)_shouldCreateHomeManager;
- (id)_createHomeManager;
- (void)_createHomeManagerOnQueue;
- (BOOL)canCreateHomeManager;
- (id)createHomeManagerIfNeeded;

@end
