@class NSMapTable;

@interface SNAudioProcessorCache : NSObject {
    NSMapTable *_activeProcessorsCache;
}

- (id)init;
- (void).cxx_destruct;

@end
