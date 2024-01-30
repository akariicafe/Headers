@class NSArray;

@interface SXDataRecordStore : NSObject

@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) NSArray *descriptors;

- (unsigned long long)numberOfRecords;
- (id)initWithRecords:(id)a0 andDescriptors:(id)a1;
- (id)initWithJSONObject:(id)a0 andVersion:(id)a1;
- (id)recordsUsingSortDescriptors:(id)a0;
- (void).cxx_destruct;

@end
