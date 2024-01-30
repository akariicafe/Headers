@class CHSApplicationProcessStateChangeConsumer, NSObject, SBHIconManager;
@protocol OS_dispatch_queue;

@interface SBChronoApplicationProcessStateObserver : NSObject

@property (readonly, nonatomic) SBHIconManager *iconManager;
@property (readonly, nonatomic) CHSApplicationProcessStateChangeConsumer *chronoConsumer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)initWithIconManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)a0;
- (void)applicationProcessStateDidChange:(id)a0;

@end
