@class NSObject, NSMutableDictionary, NPSManager;
@protocol OS_dispatch_queue;

@interface BPSNotificationMuteSettingsManager : NSObject {
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedNotificationMuteSettingsManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateObservers;
- (id)mutedForTodaySectionIdentifiers;
- (void)_loadMutedSectionIdentifiers;
- (void)_queue_sync;
- (void)addSectionIdentifiers:(id)a0;
- (BOOL)isMutedForTodaySectionIdentifier:(id)a0;
- (void)removeSectionIdentifiers:(id)a0;

@end
