@class CHSApplicationProcessStateChangeConsumer, NSObject, SBHIconManager;
@protocol OS_dispatch_queue;

@interface SBChronoApplicationProcessStateObserver : NSObject

@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (readonly, nonatomic) CHSApplicationProcessStateChangeConsumer *chronoConsumer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)init;
- (id)initWithIconManager:(id)a0;
- (void).cxx_destruct;
- (void)applicationProcessStateDidChange:(id)a0;
- (void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)a0;

@end
