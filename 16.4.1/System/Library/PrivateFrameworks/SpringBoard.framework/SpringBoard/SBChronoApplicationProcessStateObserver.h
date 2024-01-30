@class NSObject, SBIconController, CHSApplicationProcessStateChangeConsumer;
@protocol OS_dispatch_queue;

@interface SBChronoApplicationProcessStateObserver : NSObject

@property (readonly, nonatomic) SBIconController *iconController;
@property (readonly, nonatomic) CHSApplicationProcessStateChangeConsumer *chronoConsumer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)applicationProcessStateDidChange:(id)a0;
- (void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)a0;
- (id)init;
- (id)initWithIconController:(id)a0;
- (void).cxx_destruct;

@end
