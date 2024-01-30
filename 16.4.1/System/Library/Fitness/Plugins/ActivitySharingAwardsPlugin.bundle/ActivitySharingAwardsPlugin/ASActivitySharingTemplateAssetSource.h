@class NSString, HKHealthStore, NSSet, NSObject;
@protocol OS_dispatch_queue, ACHTemplateAssetSourceDelegate;

@interface ASActivitySharingTemplateAssetSource : NSObject <ACHTemplateAssetSource> {
    HKHealthStore *_healthStore;
    NSSet *_allFriends;
    NSObject<OS_dispatch_queue> *_friendListQueue;
}

@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resourceBundleURLForTemplate:(id)a0;
- (void)_startFriendsQuery;
- (id)initWithHealthStore:(id)a0;
- (void)_updateWithFriends:(id)a0;
- (id)_competitionForVictoryTemplate:(id)a0;
- (id)stickerBundleURLForTemplate:(id)a0;
- (id)customPlaceholderValuesForTemplate:(id)a0 error:(id *)a1;
- (id)_friendForVictoryTemplate:(id)a0;
- (void)_queue_updateWithFriends:(id)a0;
- (id)_queue_friendWithUUID:(id)a0;
- (id)friendWithUUID:(id)a0;
- (id)localizationBundleURLForTemplate:(id)a0;
- (void).cxx_destruct;
- (id)propertyListBundleURLForTemplate:(id)a0;

@end
