@class NSMapTable;

@interface SNAudioProcessorCache : NSObject {
    NSMapTable *_activeProcessorsCache;
}

- (id)init;
- (void).cxx_destruct;
- (id)sharedProcessorWithConfiguration:(id)a0;
- (id)audioProcessorWithConfiguration:(id)a0;
- (id)createAudioProcessorWithConfiguration:(id)a0;

@end
