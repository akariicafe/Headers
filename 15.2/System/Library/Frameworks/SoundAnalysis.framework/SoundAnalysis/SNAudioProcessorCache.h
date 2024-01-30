@class NSMapTable;

@interface SNAudioProcessorCache : NSObject {
    NSMapTable *_activeProcessorsCache;
}

- (void).cxx_destruct;
- (id)init;
- (id)sharedProcessorWithConfiguration:(id)a0;
- (id)audioProcessorWithConfiguration:(id)a0;
- (id)createAudioProcessorWithConfiguration:(id)a0;

@end
