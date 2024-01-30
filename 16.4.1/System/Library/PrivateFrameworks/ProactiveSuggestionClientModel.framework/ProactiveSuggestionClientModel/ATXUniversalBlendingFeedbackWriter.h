@class ATXBiomeBlendingModelStream, ATXBiomeClientModelStream, ATXBiomeLightweightClientModelCacheUpdateStream, ATXUniversalBiomeUIStream, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUniversalBlendingFeedbackWriter : NSObject {
    ATXBiomeClientModelStream *_clientModelStream;
    ATXBiomeLightweightClientModelCacheUpdateStream *_lightWeightClientModelStream;
    ATXBiomeBlendingModelStream *_blendingModelStream;
    ATXUniversalBiomeUIStream *_uiStream;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void)donateUIInteractionEvent:(id)a0;
- (void)donateBlendingModelUICacheUpdate:(id)a0 uiConsumer:(unsigned char)a1;
- (void)sendEventToBiomeIfNeededForClientModelCacheUpdate:(id)a0 previousUpdate:(id)a1;
- (id)init;
- (id)initWithClientModelStream:(id)a0 lightWeightClientModelStream:(id)a1 blendingModelStream:(id)a2 uiStream:(id)a3;
- (void).cxx_destruct;

@end
