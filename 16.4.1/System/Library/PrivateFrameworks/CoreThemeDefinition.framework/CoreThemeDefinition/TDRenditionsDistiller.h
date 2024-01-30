@class NSConditionLock, TDLogger, CoreThemeDocument, NSMutableArray, NSObject;
@protocol OS_dispatch_group;

@interface TDRenditionsDistiller : NSObject {
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *csiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    BOOL shouldCompressCSIDataFlag;
    BOOL noMoreCSIDataInfo;
    BOOL noMoreRenditions;
    NSObject<OS_dispatch_group> *_group;
}

@property (retain) TDLogger *logger;

- (void)waitUntilFinished;
- (void)dealloc;
- (void)_distill:(id)a0;
- (void)_enqueueCSIDataInfo:(id)a0;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueOnInQueueTheObject:(id)a0;
- (void)_enqueueOnOutQueueTheObject:(id)a0;
- (void)_enqueueOnQueue:(id)a0 withQueueLock:(id)a1 object:(id)a2;
- (id)_nextObjectFromInQueue;
- (void)detachDistillationThread;
- (void)enqueueAbortFlag;
- (void)enqueueLastRenditionFlag;
- (void)enqueueRenditionSpec:(id)a0;
- (id)initWithDocument:(id)a0 shouldCompressCSIDataFlag:(BOOL)a1;
- (id)nextCSIDataInfoFromQueue;

@end
