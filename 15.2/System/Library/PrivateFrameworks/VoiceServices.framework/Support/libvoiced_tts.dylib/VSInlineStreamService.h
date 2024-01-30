@class NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VSInlineStreamService : NSObject

@property (retain, nonatomic) NSMutableDictionary *queuedNotification;
@property (retain, nonatomic) NSMutableSet *ongoingNotifications;
@property (retain, nonatomic) NSMutableArray *streamRequestQueue;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) struct _opaque_pthread_mutexattr_t { long long __sig; char __opaque[8]; } recursiveLockAttr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)popInlineStreamRequestForSpeakRequest:(id)a0;
- (void)addInlineStreamRequest:(id)a0;
- (BOOL)hasInlineStreamRequestForSpeakRequest:(id)a0;
- (void)enqueueStreamId:(id)a0 withObject:(id)a1;
- (void)removeStreamId:(id)a0;
- (void)startStreamingWithId:(id)a0;

@end
