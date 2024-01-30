@class HMFTimer, NSUUID, NSString, HMDPhotoLibrary, NSObject, NSDate;
@protocol OS_dispatch_queue, HMDPhotoLibraryObserverDelegate;

@interface HMDPhotoLibraryObserver : HMFObject <HMDPhotoLibraryDelegate, HMFTimerDelegate>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSUUID *UUID;
@property (readonly) HMDPhotoLibrary *photoLibrary;
@property (readonly) HMFTimer *minorUpdateTimer;
@property (readonly) HMFTimer *majorUpdateTimer;
@property (readonly) HMFTimer *changeDebounceTimer;
@property (readonly) double changeDebounceLimit;
@property (copy) NSDate *initiallyDebouncedChangeDate;
@property (weak) id<HMDPhotoLibraryObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 photoLibrary:(id)a2;
- (id)initWithUUID:(id)a0 workQueue:(id)a1 photoLibrary:(id)a2 minorUpdateTimer:(id)a3 majorUpdateTimer:(id)a4 changeDebounceTimer:(id)a5 changeDebounceLimit:(double)a6;
- (void)photoLibraryPersonsDidChange;

@end
