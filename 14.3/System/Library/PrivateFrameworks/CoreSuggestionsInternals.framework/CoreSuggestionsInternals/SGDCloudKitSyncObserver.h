@class NSString, SGDCloudKitSync;

@interface SGDCloudKitSyncObserver : NSObject <SGJournalCalendarObserver> {
    id /* block */ _cksGetter;
    SGDCloudKitSync *_cks;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addEvents:(id)a0;
- (id)cloudKitSync;
- (void)cancelEvent:(id)a0;
- (void)confirmEventFromThisDevice:(id)a0;
- (void)confirmEventFromOtherDevice:(id)a0;
- (void)rejectEventFromThisDevice:(id)a0;
- (void)rejectEventFromOtherDevice:(id)a0;
- (void)orphanEvent:(id)a0;
- (void)calendarDeleted;
- (void)cancelEvents:(id)a0;
- (id)initWithCloudKitSyncGetter:(id /* block */)a0;

@end
