@class CKVDatasetRecord;

@interface CKVDatasetStatisticsBuilder : NSObject {
    CKVDatasetRecord *_record;
    unsigned long long _min;
    unsigned long long _max;
    unsigned long long _sum;
    unsigned long long _sumQ;
}

@property (readonly, nonatomic) unsigned long long count;

- (id)build;
- (id)initWithRecord:(id)a0;
- (void).cxx_destruct;
- (void)addItemBuffer:(id)a0;

@end
