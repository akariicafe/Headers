@class PBUIColorStatistics, NSString, UIImage, PBUIImageOnDiskFormat, NSURL, PBUIReplicaSourceObserverBox, _UILegibilitySettings, BSAtomicFlag;
@protocol PBUIURLSourceDelegate;

@interface PBUIURLBackedSnapshotSource : NSObject <PBUIColorStatisticsDelegate, PBUIReplicaSnapshotSource, PBUIPosterReplicaSnapshotProviding> {
    PBUIReplicaSourceObserverBox *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BSAtomicFlag *_isFrozen;
    BSAtomicFlag *_isDirty;
    BSAtomicFlag *_needsColorSettingsUpdate;
}

@property (retain, nonatomic) UIImage *snapshot;
@property (copy, nonatomic) NSString *cacheIdentifier;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (weak, nonatomic) id<PBUIURLSourceDelegate> delegate;
@property (readonly, copy, nonatomic) PBUIColorStatistics *contentColorStatistics;
@property (readonly, copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic, setter=setURL:) NSURL *url;
@property (retain, nonatomic) NSURL *metadataURL;
@property (readonly, nonatomic) PBUIImageOnDiskFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL effectsAreBakedIn;

- (void)notifyObservers;
- (void)colorStatisticsDidChange:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)setLegibilitySettings:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)performBatchUpdates:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)registerSnapshotSourceObserver:(id)a0;
- (id)buildCacheIdentifier;
- (id)encoderForSnapshot;
- (id)initWithURL:(id)a0 format:(id)a1 metadataURL:(id)a2 delegate:(id)a3;
- (void)notifyObserversIfNeeded;
- (void)readColorStatisticsFromDisk;
- (id)readFromDiskWithError:(out id *)a0;
- (BOOL)saveColorStatistics;
- (id)snapshotSourceForObserver:(id)a0;
- (void)updateColorStatisticsWith:(id)a0;
- (void)updateFromDisk;
- (BOOL)updateWithImage:(id)a0 contentColorStatistics:(id)a1 error:(out id *)a2;

@end
