@class NSString, NSMutableDictionary;

@interface TVPBaseMediaItem : NSObject <TVPMediaItem> {
    NSMutableDictionary *_metadataDictionary;
    NSMutableDictionary *_transactionDictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)mediaItemMetadataForProperty:(id)a0;
- (void)setMediaItemMetadata:(id)a0 forProperty:(id)a1;
- (void)performMediaItemMetadataTransactionWithBlock:(id /* block */)a0;
- (id)mediaItemURL;
- (BOOL)hasTrait:(id)a0;
- (BOOL)isEqualToMediaItem:(id)a0;
- (void)updateBookmarkWithSuggestedTime:(double)a0 forElapsedTime:(double)a1 duration:(double)a2 playbackOfMediaItemIsEnding:(BOOL)a3;
- (void)updatePlayCountForElapsedTime:(double)a0 duration:(double)a1;
- (id)reportingDelegate;
- (void)_setMetadata:(id)a0 forProperty:(id)a1 postNotification:(BOOL)a2;
- (void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)a0;
- (void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)a0;
- (void)removeMediaItemMetadataForProperty:(id)a0;

@end
