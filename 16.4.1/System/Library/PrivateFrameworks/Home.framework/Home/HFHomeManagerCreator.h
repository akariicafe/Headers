@class HMHomeManagerConfiguration;
@protocol HFHomeManagerCreatorDelegate, HFHomeConfigurationStatus;

@interface HFHomeManagerCreator : NSObject

@property (class, nonatomic) BOOL allowCreationInTest;

@property (nonatomic) long long hostProcessType;
@property (nonatomic) unsigned long long creationPolicy;
@property (retain, nonatomic) id<HFHomeConfigurationStatus> homeStatus;
@property (weak, nonatomic) id<HFHomeManagerCreatorDelegate> delegate;
@property (copy, nonatomic) HMHomeManagerConfiguration *configuration;

- (id)init;
- (void).cxx_destruct;
- (id)_createHomeManager;
- (void)_createHomeManagerOnQueue;
- (unsigned long long)_homeManagerCreationPolicy;
- (BOOL)_shouldCreateHomeManager;
- (BOOL)canCreateHomeManager;
- (id)createHomeManagerIfNeeded;
- (id)initWithHostProcess:(long long)a0 configuration:(id)a1 homeStatus:(id)a2 delegate:(id)a3;

@end
