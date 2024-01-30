@class NSMutableIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {
    unsigned int limit;
}

@property (readonly, retain, nonatomic) NSMutableIndexSet *indexSet;

- (BOOL)addItem:(id)a0;
- (BOOL)flush;
- (void)dealloc;
- (id)init;
- (unsigned long long)flagsForItem:(id)a0;
- (unsigned long long)uidForItem:(id)a0;

@end
