@class NSString, NSMutableArray;
@protocol _CARPFLogBackendSessionDelegate;

@interface _CARPFLogBackendSession : NSObject <CARPFLogBackendSession, CARPFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_queuedEvents;
}

@property (weak, nonatomic) id<_CARPFLogBackendSessionDelegate> delegate;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)sendMessage:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSession:(id)a0 delegate:(id)a1;
- (void)_flushQueuedEvents;
- (void)activateWithSession;

@end
