@class NSString, GEOReferenceTimeData, geo_isolater, NSObject;
@protocol OS_dispatch_semaphore;

@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate> {
    GEOReferenceTimeData *_refTimeData;
    geo_isolater *_iso;
    NSObject<OS_dispatch_semaphore> *_syncSem;
    BOOL _synchronized;
    BOOL _IsGeod;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)_persistBasisRefTimeData:(id)a0;
- (void)_syncWithTimed;
- (BOOL)_didKernBootTimeChange;
- (void)referenceTimeResult:(id /* block */)a0;
- (void)_startTimedSync;
- (BOOL)_initFromPersistence;
- (id)_retrievePersistedBasisRefTimeData;
- (id)_initInternal;
- (double)bestReferenceTime;
- (void)_kernBootTimeResult:(id /* block */)a0;
- (void)dealloc;
- (BOOL)synchronized;
- (double)_referenceTime;
- (void).cxx_destruct;

@end
