@class NSMutableIndexSet;

@interface MFSearchResponseQueue : MFBaseSyncResponseQueue {
    unsigned int limit;
}

@property (readonly, retain, nonatomic) NSMutableIndexSet *indexSet;

- (BOOL)addItem:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)flush;
- (unsigned long long)uidForItem:(id)a0;
- (unsigned long long)flagsForItem:(id)a0;

@end
