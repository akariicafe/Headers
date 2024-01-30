@class NSDictionary, NSArray;

@interface BLTBulletinFetcher : NSObject {
    NSDictionary *_bulletinIDs;
    NSArray *_sectionIDs;
    long long _sectionIDsIndex;
    NSArray *_publisherMatchIDsForSection;
    unsigned long long _publisherMatchIDsForSectionIndex;
    id /* block */ _clientCompletion;
    id /* block */ _fetcher;
}

+ (id)batchBulletinFetchForBulletinIDs:(id)a0 fetcher:(id /* block */)a1 completion:(id /* block */)a2;

- (void).cxx_destruct;
- (void)_fetchBulletins;
- (BOOL)_incrementSection;
- (void)_setBulletinIDs:(id)a0;
- (void)_setClientCompletion:(id /* block */)a0;
- (void)_setFetcher:(id /* block */)a0;

@end
