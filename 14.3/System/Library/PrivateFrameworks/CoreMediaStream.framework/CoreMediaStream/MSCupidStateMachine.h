@class NSString, NSMutableDictionary, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
    NSString *_manifestPath;
    MSBackoffManager *_streamsBackoffManager;
    MSBackoffManager *_MMCSBackoffManager;
}

@property (retain, nonatomic) NSMutableDictionary *_userManifest;
@property (readonly, nonatomic) NSString *personID;
@property (nonatomic) BOOL hasDeactivated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_abort;
- (void)forget;
- (void)_forget;
- (void)deactivate;
- (void)protocol:(id)a0 didReceiveRetryAfterDate:(id)a1;
- (void)_updateMasterManifest;
- (id)initWithPersonID:(id)a0;
- (void)_commitUserManifest;
- (void)_resetStreamsBackoffTimer;
- (void)_backoffStreamsBackoffTimer;
- (void)_didReceiveStreamsRetryAfterDate:(id)a0;
- (void)_resetMMCSBackoffTimer;
- (void)_backoffMMCSBackoffTimer;
- (void)_didReceiveMMCSRetryAfterDate:(id)a0;
- (id)_latestNextActivityDate;

@end
