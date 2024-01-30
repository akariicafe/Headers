@class NSArray, NSMutableArray, HMFUnfairLock;

@interface HMMutableArray : NSObject {
    HMFUnfairLock *_lock;
}

@property (readonly, copy, nonatomic) NSMutableArray *internal;
@property (copy, nonatomic) NSArray *array;
@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayWithArray:(id)a0;
+ (id)array;

- (id)firstItemWithUUID:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)removeAllObjects;
- (id)initWithArray:(id)a0;
- (void)removeObjectsInArray:(id)a0;
- (id)filteredArrayUsingPredicate:(id)a0;
- (id)firstItemWithValue:(id)a0 forKey:(id)a1;
- (id)firstItemWithUniqueIdentifier:(id)a0;
- (void)addObjectsFromArray:(id)a0;
- (void)addObjectIfNotPresent:(id)a0;
- (id)itemsWithValue:(id)a0 forKey:(id)a1;
- (void)setIfDifferent:(id)a0;
- (id)firstItemWithName:(id)a0;
- (void)replaceObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)firstItemWithCharacteristicType:(id)a0;
- (void)addObject:(id)a0;
- (id)firstItemWithInstanceID:(id)a0;
- (void)removeObject:(id)a0;

@end
