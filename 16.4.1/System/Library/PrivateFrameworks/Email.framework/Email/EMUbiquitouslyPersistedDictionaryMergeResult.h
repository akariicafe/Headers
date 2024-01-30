@class NSDictionary, NSArray;

@interface EMUbiquitouslyPersistedDictionaryMergeResult : NSObject

@property (readonly, nonatomic) NSDictionary *changedItems;
@property (readonly, nonatomic) NSArray *deletedItems;
@property (readonly, nonatomic) BOOL requiresSynchronizing;

- (void).cxx_destruct;
- (id)initWithChangedItems:(id)a0 deletedItems:(id)a1 requiresSynchronizing:(BOOL)a2;

@end
