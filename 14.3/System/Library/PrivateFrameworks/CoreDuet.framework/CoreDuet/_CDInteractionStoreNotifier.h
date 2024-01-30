@class _CDInteractionStore, NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, weak, nonatomic) _CDInteractionStore *interactionStore;

- (void).cxx_destruct;
- (void)dealloc;
- (void)postPackedMechanisms:(unsigned long long)a0;
- (void)recorded:(id)a0;
- (void)resume;
- (id)initWithInteractionStore:(id)a0;
- (void)deleted;
- (void)suspend;

@end
