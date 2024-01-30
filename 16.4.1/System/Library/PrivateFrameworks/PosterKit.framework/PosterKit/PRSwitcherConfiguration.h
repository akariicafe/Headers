@class NSArray, NSMapTable, NSString, PRPosterConfiguration;
@protocol PRPosterContentSnapshotProviding;

@interface PRSwitcherConfiguration : NSObject <NSMutableCopying, PRPosterContentSnapshotProviding>

@property (copy, nonatomic) NSArray *configurations;
@property (retain, nonatomic) PRPosterConfiguration *selectedConfiguration;
@property (retain, nonatomic) PRPosterConfiguration *activeConfiguration;
@property (readonly, nonatomic) NSMapTable *associatedHomeScreenConfigurationsForServerIdentity;
@property (nonatomic) BOOL activeConfigurationDueToIncomingFocusModeChange;
@property (readonly, weak, nonatomic) id<PRPosterContentSnapshotProviding> snapshotProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)primaryPosterIdentityForHomeScreenPosterConfiguration:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)heldAssociatedConfigurations;
- (id)_childPosterConfigurationForConfiguration:(id)a0;
- (id)homeScreenPosterConfigurationForPosterConfiguration:(id)a0;
- (id)homeConfigurationForPoster:(id)a0;
- (id)_initWithConfigurations:(id)a0 selectedConfiguration:(id)a1 activeConfiguration:(id)a2 associatedHomeScreenConfigurations:(id)a3 snapshotProvider:(id)a4;
- (void)fetchSnapshotForConfiguration:(id)a0 compatibleWithTraitCollection:(id)a1 completion:(id /* block */)a2;
- (id)focusConfigurationForPoster:(id)a0;
- (id)_posterConfigurationForUUID:(id)a0;
- (id)_childPosterConfigurationForConfigurationUUID:(id)a0;
- (void).cxx_destruct;

@end
