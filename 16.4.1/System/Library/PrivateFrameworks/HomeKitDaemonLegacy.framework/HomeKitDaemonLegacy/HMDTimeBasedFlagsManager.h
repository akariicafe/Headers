@class HMDMetricsDateProvider, NSMutableDictionary, NSString, NSObject;
@protocol HMDTimeBasedFlagsStoring, OS_dispatch_queue;

@interface HMDTimeBasedFlagsManager : HMFObject <HMDTimeBasedFlagContext> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) HMDMetricsDateProvider *dateProvider;
@property (retain, nonatomic) NSMutableDictionary *flags;
@property (readonly) id<HMDTimeBasedFlagsStoring> flagsStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_save;
- (id)initWithDateProvider:(id)a0;
- (void).cxx_destruct;
- (id)_fetchAllFlags;
- (void)flagChanged;
- (id)flagForName:(id)a0 homeUUID:(id)a1 periodicity:(long long)a2;
- (id)flagForName:(id)a0 periodicity:(long long)a1;
- (id)flagForSpecifier:(id)a0 periodicity:(long long)a1;
- (void)forceSave;
- (id)initWithStorage:(id)a0 dateProvider:(id)a1;
- (id)newFlagForPeriodicity:(long long)a0;
- (id)unarchiveFlags;
- (id)unarchiveLegacyFlags;

@end
