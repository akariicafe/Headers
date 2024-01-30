@class HMDBackingStoreCacheGroup, NSArray;

@interface HMDBackingStoreCacheFetchRecords : HMDBackingStoreOperation

@property (retain, nonatomic) HMDBackingStoreCacheGroup *group;
@property (copy, nonatomic) id /* block */ fetchResult;
@property (retain, nonatomic) NSArray *recordNames;
@property (retain, nonatomic) NSArray *uuids;
@property (retain, nonatomic) NSArray *parentUuids;
@property BOOL recursive;

- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 parentUuids:(id)a1 fetchResult:(id /* block */)a2;
- (id)initWithGroup:(id)a0 records:(id)a1 fetchResult:(id /* block */)a2;
- (id)initWithGroup:(id)a0 uuids:(id)a1 fetchResult:(id /* block */)a2;
- (id)mainReturningError;

@end
