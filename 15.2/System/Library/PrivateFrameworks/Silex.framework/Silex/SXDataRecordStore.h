@class NSArray;

@interface SXDataRecordStore : NSObject

@property (readonly, nonatomic) NSArray *records;
@property (readonly, nonatomic) NSArray *descriptors;

- (void).cxx_destruct;
- (unsigned long long)numberOfRecords;
- (id)initWithJSONObject:(id)a0 andVersion:(id)a1;
- (id)initWithRecords:(id)a0 andDescriptors:(id)a1;
- (id)recordsUsingSortDescriptors:(id)a0;

@end
