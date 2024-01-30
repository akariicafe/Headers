@interface ATXNotificationManagementInspector : NSObject

- (BOOL)clearAllNotificationData:(id *)a0;
- (id)constructStacksForNotifications:(id)a0;
- (id)constructStacksGroupedByAppForNotifications:(id)a0;
- (id)fetchNotificationsFromBiomeFromStartDate:(id)a0 endDate:(id)a1 outError:(id *)a2;
- (id)fetchNotificationsFromCoreDuetFromStartDate:(id)a0 endDate:(id)a1;
- (id)fetchNotificationsFromDbFromStartDate:(id)a0 endDate:(id)a1;
- (id)fetchNotificationsFromFileData:(id)a0 outError:(id *)a1;
- (id)fetchNotificationsFromSource:(id)a0 startDate:(id)a1 endDate:(id)a2 shouldInferMessages:(BOOL)a3 outError:(id *)a4;
- (id)fetchSerializedAppGroupedNotificationDigestFromSource:(id)a0 digestTimeString:(id)a1 startDate:(id)a2 endDate:(id)a3 shouldInferMessages:(BOOL)a4 outError:(id *)a5;
- (id)fetchSerializedMissedNotificationRankingFromFileData:(id)a0 modeString:(id)a1 outError:(id *)a2;
- (id)fetchSerializedMissedNotificationRankingFromSource:(id)a0 modeString:(id)a1 startDate:(id)a2 endDate:(id)a3 shouldInferMessages:(BOOL)a4 outError:(id *)a5;
- (id)fetchSerializedNotificationDigestFromFileData:(id)a0 digestTimeString:(id)a1 outError:(id *)a2;
- (id)fetchSerializedNotificationDigestFromSource:(id)a0 digestTimeString:(id)a1 startDate:(id)a2 endDate:(id)a3 shouldInferMessages:(BOOL)a4 outError:(id *)a5;
- (id)fetchSerializedNotificationsFromSource:(id)a0 startDate:(id)a1 endDate:(id)a2 shouldInferMessages:(BOOL)a3 outError:(id *)a4;
- (id)logAndCreateErrorForString:(id)a0;

@end
