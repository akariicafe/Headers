@interface ATXNotificationManagementInspector : NSObject

- (id)fetchNotificationsFromFileData:(id)a0 outError:(id *)a1;
- (id)constructStacksForNotifications:(id)a0;
- (id)fetchNotificationsFromSource:(id)a0 startDate:(id)a1 endDate:(id)a2 shouldInferMessages:(BOOL)a3 outError:(id *)a4;
- (id)fetchNotificationsFromCoreDuetFromStartDate:(id)a0 endDate:(id)a1;
- (id)fetchNotificationsFromBiomeFromStartDate:(id)a0 endDate:(id)a1 outError:(id *)a2;
- (id)fetchNotificationsFromDbFromStartDate:(id)a0 endDate:(id)a1;
- (id)logAndCreateErrorForString:(id)a0;
- (BOOL)clearAllNotificationData:(id *)a0;
- (id)fetchSerializedNotificationDigestFromFileData:(id)a0 digestTimeString:(id)a1 rankerString:(id)a2 outError:(id *)a3;
- (id)fetchSerializedNotificationDigestFromSource:(id)a0 digestTimeString:(id)a1 startDate:(id)a2 endDate:(id)a3 shouldInferMessages:(BOOL)a4 rankerString:(id)a5 outError:(id *)a6;
- (id)fetchSerializedMissedNotificationRankingFromFileData:(id)a0 modeString:(id)a1 rankerString:(id)a2 outError:(id *)a3;
- (id)fetchSerializedMissedNotificationRankingFromSource:(id)a0 modeString:(id)a1 startDate:(id)a2 endDate:(id)a3 shouldInferMessages:(BOOL)a4 rankerString:(id)a5 outError:(id *)a6;
- (id)fetchSerializedNotificationsFromSource:(id)a0 startDate:(id)a1 endDate:(id)a2 shouldInferMessages:(BOOL)a3 outError:(id *)a4;

@end
