@class NSSet, NSString, HDProfile, ASFriendListManager, ASCompetitionTemplateSource, ASCompetitionAwardingSource;

@interface ASAchievementManager : NSObject <ASCompetitionTemplateSourceDataProvider, ASCompetitionAwardingSourceDataProvider, ASFriendListObserver, ASActivitySharingManagerReadyObserver> {
    HDProfile *_profile;
    ASFriendListManager *_friendListManager;
    ASCompetitionAwardingSource *_competitionAwardingSource;
    ASCompetitionTemplateSource *_competitionTemplateSource;
    BOOL _isWatch;
}

@property (readonly, nonatomic) NSSet *friends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)friendWithUUID:(id)a0;
- (void)removeAllTemplates;
- (void)activitySharingManagerReady:(id)a0;
- (void)removeUnusedTemplatesForFriendWithUUID:(id)a0;
- (void)_removeUnusedTemplatesForFriendWithUUID:(id)a0 templateStore:(id)a1;
- (void)friendListDidUpdate:(id)a0;
- (void)friendListDidLoadCompetitions;
- (id)initWithIsWatch:(BOOL)a0;
- (void)requestTemplateUpdate;
- (void)requestEarnedInstanceUpdate;
- (void)removeAllUnusedTemplates;

@end
