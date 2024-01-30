@class NSString, NSHashTable;

@interface PUTilingDataSource : NSObject

@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (retain, nonatomic) NSString *identifier;

- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)a0 reverseDirection:(BOOL)a1 usingBlock:(id /* block */)a2;

@end
