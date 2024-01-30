@class MPMusicPlayerApplicationController;

@interface _MPMusicPlayerQueueItemsProxy : NSArray

@property (readonly, weak, nonatomic) MPMusicPlayerApplicationController *controller;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithController:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;

@end
