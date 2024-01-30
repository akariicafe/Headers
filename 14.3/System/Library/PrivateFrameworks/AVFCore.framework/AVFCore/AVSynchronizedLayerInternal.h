@class AVPlayerItem, NSObject;
@protocol OS_dispatch_queue;

@interface AVSynchronizedLayerInternal : NSObject {
    AVPlayerItem *playerItem;
    BOOL isVisible;
    NSObject<OS_dispatch_queue> *serialQueue;
}

@end
