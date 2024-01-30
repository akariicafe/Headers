@class CPLSyncSession, NSString, CPLEngineLibrary, NSDate;
@protocol CPLEngineStoreUserIdentifier, CPLEngineSyncTaskDelegate;

@interface CPLEngineSyncTask : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _phaseDescriptionLock;
    NSDate *_lastChangeDateForPhaseDescription;
}

@property (getter=isCancelled, setter=_setCancelled:) BOOL cancelled;
@property (retain) id<CPLEngineSyncTaskDelegate> delegate;
@property (readonly, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly, nonatomic) CPLSyncSession *session;
@property (retain, nonatomic) id<CPLEngineStoreUserIdentifier> transportUserIdentifier;
@property (nonatomic) BOOL foreground;
@property (nonatomic) BOOL forceSync;
@property (readonly, nonatomic) NSString *taskIdentifier;
@property (copy) NSString *phaseDescription;

+ (id)taskWithEngineLibrary:(id)a0 session:(id)a1;

- (id)initWithEngineLibrary:(id)a0 session:(id)a1;
- (void)taskDidFinishWithError:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)diskPressureState;
- (void)launch;
- (void)cancel;
- (void)launchTransportTask:(id)a0 withTransportGroup:(id)a1;
- (void)taskDidProgress:(float)a0 userInfo:(id)a1;
- (id)phaseDescriptionLastChangeDate:(id *)a0;

@end
