@class NSMutableDictionary, HMFUnfairLock, NSDate, NSObject;
@protocol OS_dispatch_queue, HMDEventFlagsStoring;

@interface HMDEventFlagsManager : HMFObject {
    HMFUnfairLock *_lock;
}

@property (class, readonly) HMDEventFlagsManager *sharedEventFlagsManager;

@property (retain, nonatomic) NSMutableDictionary *eventFlags;
@property (retain, nonatomic) NSDate *lastSaveTime;
@property (nonatomic) unsigned long long saveCount;
@property (nonatomic, getter=isSaving) BOOL saving;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDEventFlagsStoring> flagsStorage;

- (void)_save;
- (void).cxx_destruct;
- (id)init;
- (void)forceSave;
- (void)shiftEventFlagsForRequestGroup:(id)a0;
- (unsigned long long)fetchEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)setEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)defineEventPeriod:(double)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (void)resetEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)defineEventPeriod:(double)a0 forEventNames:(id)a1 requestGroup:(id)a2;
- (void)_performOnUpdate;
- (id)initWithEventFlagsStorage:(id)a0;
- (void)setEventFlagsForEventNames:(id)a0 requestGroup:(id)a1;
- (id)fetchEventFlagsForRequestGroup:(id)a0;
- (id)fetchAllEventFlags;
- (id)fetchAllEventPeriodsDefinedForEventFlags;
- (void)shiftEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)resetEventFlagsForRequestGroup:(id)a0;
- (id)_eventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)_setEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)_defineEventPeriod:(double)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (unsigned long long)_fetchEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (id)_fetchEventFlagsForRequestGroup:(id)a0;
- (id)_fetchAllEventFlags;
- (id)_fetchEventPeriodsForRequestGroup:(id)a0;
- (id)_fetchAllDefinedEventPeriods;
- (void)_shiftEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)_resetEventFlagForEventName:(id)a0 requestGroup:(id)a1;
- (void)logDiskWriteState;
- (id)unarchivedEventFlags;
- (void)archiveEventFlagsWithEventFlagsSnapshot:(id)a0 definedEventPeriodsSnapshot:(id)a1 completionHandler:(id /* block */)a2;

@end
