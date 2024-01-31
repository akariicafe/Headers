@class NSMapTable, AXMVisionEngine, NSObject;
@protocol OS_dispatch_queue;

@interface AXAVFoundationMediaDescriptionManager : NSObject {
    AXMVisionEngine *_engine;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_queue_nodeToPlayerMap;
}

@property (readonly, nonatomic) BOOL isTappingMediaDescriptions;
@property (readonly, nonatomic) BOOL isVoiceOverInTheTripleClickMenu;

+ (id)sharedManager;
+ (id)sharedManagerIfExists;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)_queue_itemNodeForPlayer:(id)a0;
- (BOOL)_shouldAttachLegibilityOutputToItem:(id)a0;
- (BOOL)beginObservingPlayer:(id)a0;
- (void)endObservingPlayer:(id)a0;

@end
