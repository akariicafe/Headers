@class MPMusicPlayerControllerApplicationQueueModifications, NSMutableDictionary, NSMutableArray;

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue

@property (retain, nonatomic) NSMutableDictionary *insertedDescriptors;
@property (retain, nonatomic) NSMutableArray *removedItems;
@property (readonly, nonatomic) MPMusicPlayerControllerApplicationQueueModifications *modifications;

- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (void)insertQueueDescriptor:(id)a0 afterItem:(id)a1;
- (id)initWithController:(id)a0;

@end
