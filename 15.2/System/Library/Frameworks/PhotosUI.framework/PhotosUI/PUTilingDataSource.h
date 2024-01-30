@class NSString, NSHashTable;

@interface PUTilingDataSource : NSObject

@property (readonly, nonatomic) NSHashTable *_changeObservers;
@property (retain, nonatomic) NSString *identifier;

- (long long)numberOfSubItemsAtIndexPath:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)enumerateIndexPathsStartingAtIndexPath:(id)a0 reverseDirection:(BOOL)a1 usingBlock:(id /* block */)a2;
- (unsigned long long)hash;

@end
