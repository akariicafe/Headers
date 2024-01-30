@class AVPlayerItem;

@interface AVPlayerQueueModificationDescription : NSObject

@property (readonly, nonatomic) long long modificationType;
@property (readonly, nonatomic) AVPlayerItem *item;
@property (readonly, nonatomic) AVPlayerItem *afterItem;

+ (id)modificationForInsertingItem:(id)a0 afterItem:(id)a1;
+ (id)modificationForRemovingItem:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithModificationType:(long long)a0 item:(id)a1 afterItem:(id)a2;

@end
