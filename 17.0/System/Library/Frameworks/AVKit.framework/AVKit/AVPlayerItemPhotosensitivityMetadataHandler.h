@class AVPlayerItemMetadataCollector, NSArray, NSString, AVPlayerItem;

@interface AVPlayerItemPhotosensitivityMetadataHandler : NSObject <AVPlayerItemMetadataCollectorPushDelegate> {
    id /* block */ _handler;
    AVPlayerItem *_item;
}

@property (readonly, nonatomic) AVPlayerItemMetadataCollector *metadataCollector;
@property (retain, nonatomic) NSArray *photosensitivityRegions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
