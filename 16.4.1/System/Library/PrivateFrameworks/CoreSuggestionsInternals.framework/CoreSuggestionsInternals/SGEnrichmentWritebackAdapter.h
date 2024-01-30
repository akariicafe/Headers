@class NSString, SGSqlEntityStore, SGCoalescingDropBox;

@interface SGEnrichmentWritebackAdapter : NSObject <SGJournalCalendarObserver> {
    SGCoalescingDropBox *_dropBox;
    SGSqlEntityStore *_weakStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_attributeSetsForEvents:(id)a0;
+ (id)_enrichmentWritebackVersionKey;
+ (BOOL)_isEligibleEvent:(id)a0;

- (void)addEvent:(id)a0;
- (id)initWithStore:(id)a0;
- (void)addEvents:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)calendarDeleted;
- (void)_actuallyAddEvents:(id)a0;
- (id)_spotlightUidsForAppleMailMessageIds:(id)a0;
- (void)cancelEvent:(id)a0;
- (void)cancelEvents:(id)a0;
- (void)confirmEventFromOtherDevice:(id)a0;
- (void)confirmEventFromThisDevice:(id)a0;
- (void)orphanEvent:(id)a0;
- (void)rejectEventFromOtherDevice:(id)a0;
- (void)rejectEventFromThisDevice:(id)a0;
- (void)writebackEnrichmentsForNewCopyOfMessage:(id)a0;

@end
