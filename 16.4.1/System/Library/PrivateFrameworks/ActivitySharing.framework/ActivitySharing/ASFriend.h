@class NSUUID, NSString, NSArray, NSDate, _HKFitnessFriendActivitySnapshot, NSDictionary, NSDateComponents, NSTimeZone, ASContact, ASCompetition, NSNumber;

@interface ASFriend : NSObject <NSCopying>

@property (retain, nonatomic) ASContact *contact;
@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSDateComponents *currentDateComponents;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic, getter=isMe) BOOL me;
@property (readonly, nonatomic) BOOL isFriendshipCurrentlyActive;
@property (readonly, nonatomic) BOOL canSeeMyActivityData;
@property (readonly, nonatomic) BOOL isActivityDataCurrentlyVisibleToMe;
@property (readonly, nonatomic) BOOL isCurrentlyHidingActivityDataFromMe;
@property (readonly, nonatomic) BOOL isMyActivityDataCurrentlyHidden;
@property (readonly, nonatomic) BOOL hasInviteRequestFromMe;
@property (readonly, nonatomic) BOOL sentInviteRequestToMe;
@property (readonly, nonatomic) BOOL isAwaitingInviteResponseFromMe;
@property (readonly, nonatomic) BOOL inviteRequestToMeWasAccepted;
@property (readonly, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property (readonly, nonatomic) NSDate *dateForLatestDataHiddenFromMe;
@property (readonly, nonatomic) NSDate *dateForLatestDataHidden;
@property (readonly, nonatomic) NSDate *dateForLatestRelationshipStart;
@property (readonly, nonatomic) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property (readonly, nonatomic) BOOL isMuted;
@property (retain, nonatomic) NSArray *competitions;
@property (readonly, nonatomic) NSArray *completedCompetitions;
@property (readonly, nonatomic) ASCompetition *currentOrMostRecentCompetition;
@property (readonly, nonatomic) ASCompetition *currentCompetition;
@property (readonly, nonatomic) ASCompetition *mostRecentlyCompletedCompetition;
@property (readonly, nonatomic) ASCompetition *competitionPendingAcceptance;
@property (readonly, nonatomic) BOOL hasCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL hasPendingCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL ignoredCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL isAwaitingCompetitionResponseFromMe;
@property (readonly, nonatomic) BOOL isCompetitionActive;
@property (readonly, nonatomic) BOOL hasCompletedCompetition;
@property (readonly, nonatomic) BOOL hasCompletedFirstDayOfCurrentCompetition;
@property (readonly, nonatomic) BOOL isEligibleToReceiveCompetitionRequest;
@property (readonly, nonatomic) BOOL hasCompetitionHistory;
@property (readonly, nonatomic) unsigned long long numberOfCompetitionWinsAgainstMe;
@property (readonly, nonatomic) unsigned long long numberOfCompetitionWinsByMe;
@property (readonly, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (readonly, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest;
@property (readonly, nonatomic) NSDate *earliestCompetitionVictoryOrPotentialVictoryDate;
@property (retain, nonatomic) NSDictionary *snapshots;
@property (retain, nonatomic) NSDictionary *friendAchievements;
@property (retain, nonatomic) NSDictionary *friendWorkouts;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshot;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property (readonly, nonatomic) NSNumber *currentCacheIndex;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property (readonly, nonatomic) BOOL supportsCompetitions;

+ (id)friendWithCodableFriend:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(long long)a0;
- (id)codableFriendIncludingCloudKitFields:(BOOL)a0;
- (id)initWithActivitySnapshots:(id)a0 friendAchievements:(id)a1 friendWorkouts:(id)a2 contact:(id)a3 competitions:(id)a4;
- (BOOL)isActivityDataVisibleToMeForDate:(id)a0;
- (BOOL)isHidingActivityDataFromMeForDate:(id)a0;
- (id)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)a0;

@end
