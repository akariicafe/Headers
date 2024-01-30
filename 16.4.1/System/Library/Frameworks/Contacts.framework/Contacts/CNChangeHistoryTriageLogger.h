@class NSString, NSObject;
@protocol OS_os_log;

@interface CNChangeHistoryTriageLogger : NSObject <CNChangeHistoryEventVisitorPrivate>

@property (class, readonly) CNChangeHistoryTriageLogger *saveLogger;
@property (class, readonly) CNChangeHistoryTriageLogger *fetchLogger;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly) NSObject<OS_os_log> *os_log;
@property (readonly) unsigned char defaultLogType;
@property (readonly) unsigned char destructiveLogType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDeleteGroupEvent:(id)a0;
- (void)visitDifferentMeCardEvent:(id)a0;
- (void)didFetchHistoryEventsCount:(long long)a0 anchor:(id)a1 truncated:(BOOL)a2;
- (void)willFetchHistoryWithRequest:(id)a0;
- (void)visitAddMemberToGroupEvent:(id)a0;
- (void)willExecuteSaveRequest;
- (void)visitLinkContactsEvent:(id)a0;
- (void)fetchDidFailWithError:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitRemoveMemberFromGroupEvent:(id)a0;
- (void)visitUpdateGroupEvent:(id)a0;
- (void)visitAddSubgroupToGroupEvent:(id)a0;
- (void)fetchDidFailToTranslateWithError:(id)a0;
- (void)visitUnlinkContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitPreferredContactForNameEvent:(id)a0;
- (void)visitAddGroupEvent:(id)a0;
- (void)visitRemoveSubgroupFromGroupEvent:(id)a0;
- (id)init;
- (void)didExecuteSaveRequest;
- (void)visitDropEverythingEvent:(id)a0;
- (void)didFetchHistoryEvents:(id)a0 anchor:(id)a1;
- (void).cxx_destruct;
- (id)initWithOSLog:(id)a0 defaultLogType:(unsigned char)a1 destructiveLogType:(unsigned char)a2;
- (void)visitPreferredContactForImageEvent:(id)a0;

@end
