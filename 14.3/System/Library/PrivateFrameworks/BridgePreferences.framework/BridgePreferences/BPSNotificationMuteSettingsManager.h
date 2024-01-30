@class NSObject, NSMutableDictionary, NPSManager;
@protocol OS_dispatch_queue;

@interface BPSNotificationMuteSettingsManager : NSObject {
    NSMutableDictionary *_mutedSectionIdentifiersForDay;
    NPSManager *_npsManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedNotificationMuteSettingsManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateObservers;
- (void)_loadMutedSectionIdentifiers;
- (id)mutedForTodaySectionIdentifiers;
- (void)_queue_sync;
- (BOOL)isMutedForTodaySectionIdentifier:(id)a0;
- (void)addSectionIdentifiers:(id)a0;
- (void)removeSectionIdentifiers:(id)a0;

@end
