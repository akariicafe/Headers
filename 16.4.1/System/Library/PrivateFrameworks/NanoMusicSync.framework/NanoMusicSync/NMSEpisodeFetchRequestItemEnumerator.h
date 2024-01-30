@class NSArray, NSFetchRequest, NSManagedObjectContext;

@interface NMSEpisodeFetchRequestItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSFetchRequest *_fetchRequest;
    NSManagedObjectContext *_ctx;
    unsigned long long _itemIndex;
}

@property (readonly, nonatomic) NSArray *items;

- (id)nextItem;
- (void).cxx_destruct;
- (id)initWithFetchRequest:(id)a0 ctx:(id)a1;

@end
