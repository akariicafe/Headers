@interface MTPreferencesFeedUpdate : NSObject

+ (id)_numberFormatter;
+ (void)_setRevisionString:(id)a0 forKey:(id)a1;
+ (void)_removeRevisionStringForKey:(id)a0;
+ (void)setCompanionLastFetchedDate:(id)a0 forFeedURL:(id)a1;
+ (void)removeCompanionLastFetchedDateForFeedURL:(id)a0;
+ (void)incrementCompanionRevisionNumberForFeedURL:(id)a0;
+ (void)removeCompanionRevisionNumberForFeedURL:(id)a0;
+ (void)setCompanionSubscriptionSyncRevisionString:(id)a0;
+ (void)removeCompanionSubscriptionSyncRevisionString;
+ (void)setCompanionPlaylistRevisionString:(id)a0;
+ (void)removeCompanionPlaylistRevisionString;
+ (void)setCompanionUPPSyncRevisionString:(id)a0;
+ (void)removeCompanionUPPSyncRevisionString;
+ (id)getCompanionRevisionNumberForFeedURL:(id)a0;
+ (id)getCompanionSubscriptionSyncRevisionNumber;
+ (id)getCompanionPlaylistRevisionNumber;
+ (id)getCompanionUPPSyncRevisionNumber;
+ (id)getCompanionLastFetchedDateForFeedURL:(id)a0;
+ (void)setGizmoLastFetchedDate:(id)a0 forFeedURL:(id)a1;
+ (void)removeGizmoLastFetchedDateForFeedURL:(id)a0;
+ (id)getGizmoLastFetchedDateForFeedURL:(id)a0;
+ (void)setGizmoRevisionNumber:(id)a0 forFeedURL:(id)a1;
+ (void)removeGizmoRevisionNumberForFeedURL:(id)a0;
+ (id)getGizmoRevisionNumberForFeedURL:(id)a0;
+ (void)setStartDate:(id)a0 forOngoingFetchOfFeedURL:(id)a1;
+ (void)removeStartDateForOngoingFetchOfFeedURL:(id)a0;
+ (id)getStartDateForOngoingFetchOfFeedURL:(id)a0;
+ (void)setCompanionRevisionNumber:(id)a0 forOngoingFetchOfFeedURL:(id)a1;
+ (void)removeCompanionRevisionNumberForOngoingFetchOfFeedURL:(id)a0;
+ (id)getCompanionRevisionNumberForOngoingFetchOfFeedURL:(id)a0;

@end
