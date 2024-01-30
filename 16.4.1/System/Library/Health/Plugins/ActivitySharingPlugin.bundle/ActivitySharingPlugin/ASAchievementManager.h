@class NSSet, NSString, HDProfile, ASFriendListManager, ASCompetitionTemplateSource, ASCompetitionAwardingSource;

@interface ASAchievementManager : NSObject <ASCompetitionTemplateSourceDataProvider, ASCompetitionAwardingSourceDataProvider, ASFriendListObserver, ASActivitySharingManagerReadyObserver> {
    HDProfile *_profile;
    ASFriendListManager *_friendListManager;
    ASCompetitionAwardingSource *_competitionAwardingSource;
    ASCompetitionTemplateSource *_competitionTemplateSource;
    BOOL _isWatch;
    BOOL _useNewAchievementsSystem;
}

@property (readonly, nonatomic) NSSet *friends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIsWatch:(BOOL)a0;
- (void)activitySharingManagerReady:(id)a0;
- (void)friendListDidUpdate:(id)a0;
- (void)friendListDidLoadCompetitions;
- (id)friendWithUUID:(id)a0;
- (void).cxx_destruct;
- (void)removeAllTemplates;
- (void)_requestAwardsUpdateIfNecessary;
- (void)_removeAllUnusedTemplatesUsingClient;
- (void)_removeAllUnusedTemplatesUsingProfile;
- (void)_removeUnusedTemplatesForFriendWithUUID:(id)a0 templateStore:(id)a1;
- (void)removeAllUnusedTemplates;
- (void)removeUnusedTemplatesForFriendWithUUID:(id)a0;
- (void)requestEarnedInstanceUpdate;
- (void)requestTemplateUpdate;

@end
