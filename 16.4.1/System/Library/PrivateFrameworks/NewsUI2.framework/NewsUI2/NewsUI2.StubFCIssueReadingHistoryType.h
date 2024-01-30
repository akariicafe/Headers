@class NSString, NSArray;

@interface NewsUI2.StubFCIssueReadingHistoryType : _TtCs12_SwiftObject <FCIssueReadingHistoryType>

@property (nonatomic, readonly) NSString *mostRecentlyVisitedIssueID;
@property (nonatomic, readonly) NSArray *recentlyVisitedIssueIDs;
@property (nonatomic, readonly) NSArray *recentlyEngagedIssueIDs;
@property (nonatomic, readonly) NSArray *allEngagedIssueIDs;

- (id)lastVisitedDateForIssueWithID:(id)a0;
- (id)bookmarkForLastVisitToIssueWithID:(id)a0;
- (id)lastRemovedFromMyMagazinesDateForIssueWithID:(id)a0;
- (BOOL)hasIssueWithIDBeenVisited:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)hasIssueWithIDBeenSeen:(id)a0;
- (void)markIssueAsEngagedWithID:(id)a0;
- (BOOL)hasIssueWithIDBeenBadged:(id)a0;
- (void)removeObserver:(id)a0;
- (id)lastEngagedDateForIssueWithID:(id)a0;
- (id)lastSeenDateForIssueWithID:(id)a0;
- (void)markIssueAsSeenWithID:(id)a0;
- (void)markIssueAsBadgedWithID:(id)a0;
- (void)prepareForUseWithCompletion:(id /* block */)a0;
- (BOOL)hasIssueWithIDBeenEngaged:(id)a0;
- (void)markIssueWithID:(id)a0 asVisitedWithBookmark:(id)a1;
- (void)markIssueAsRemovedFromMyMagazinesWithID:(id)a0;

@end
