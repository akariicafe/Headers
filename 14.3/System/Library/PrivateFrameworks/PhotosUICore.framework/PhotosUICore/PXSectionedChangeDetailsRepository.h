@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface PXSectionedChangeDetailsRepository : NSObject {
    NSMutableArray *_allChangeDetails;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) long long historyLimit;

- (id)changeDetailsFromDataSourceIdentifier:(unsigned long long)a0 toDataSourceIdentifier:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)addChangeDetails:(id)a0;
- (id)initWithChangeHistoryLimit:(long long)a0;
- (id)coalescedChangeDetailsFromDataSourceIdentifier:(unsigned long long)a0 toDataSourceIdentifier:(unsigned long long)a1;

@end
