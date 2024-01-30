@class HDHAHealthPluginHostFeedGenerator, NSString, HDSummarySharingEntryManager;

@interface HDHealthAppSharingEntryObserver : NSObject <HDSummarySharingEntryManagerDelegate>

@property (retain, nonatomic) HDSummarySharingEntryManager *sharingEntryManager;
@property (retain, nonatomic) HDHAHealthPluginHostFeedGenerator *feedGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)sharingEntryManager:(id)a0 didJournalEntries:(id)a1;
- (void).cxx_destruct;

@end
