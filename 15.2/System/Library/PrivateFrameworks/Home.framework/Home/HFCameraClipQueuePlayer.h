@class NSArray, HFCameraClipPlayerItem;

@interface HFCameraClipQueuePlayer : AVQueuePlayer

@property (readonly, nonatomic) HFCameraClipPlayerItem *currentItem;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)initWithItems:(id)a0;

@end
