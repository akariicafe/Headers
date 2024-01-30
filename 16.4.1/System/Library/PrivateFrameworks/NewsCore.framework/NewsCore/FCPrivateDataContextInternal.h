@class NSString, FCCKRecordZone, FCCKRecordZoneManager, FCCKPrivateDatabase;
@protocol FCAppActivityMonitor;

@interface FCPrivateDataContextInternal : NSObject <FCPrivateDataContextInternal>

@property (retain, nonatomic) FCCKPrivateDatabase *privateDatabase;
@property (retain, nonatomic) id<FCAppActivityMonitor> appActivityMonitor;
@property (retain, nonatomic) FCCKRecordZoneManager *recordZoneManager;
@property (readonly, nonatomic) FCCKRecordZone *issueReadingHistoryRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *readingListRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *shortcutsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *subscriptionsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *sensitiveSubscriptionsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *readingHistoryRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *channelMembershipsRecordZone;
@property (readonly, nonatomic) FCCKRecordZone *userInfoRecordZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
