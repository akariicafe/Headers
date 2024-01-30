@class HMBModel, NSData, HMBLocalSQLQueryTable;

@interface HMBMirrorOutputTuple : HMFObject

@property (readonly) unsigned long long recordRow;
@property (readonly) unsigned long long outputBlockRow;
@property (readonly, nonatomic) HMBModel *model;
@property (copy, nonatomic) NSData *externalID;
@property (copy, nonatomic) NSData *externalData;
@property (readonly, nonatomic) HMBLocalSQLQueryTable *queryTable;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithOutputBlockRow:(unsigned long long)a0 recordRow:(unsigned long long)a1 model:(id)a2 queryTable:(id)a3 externalID:(id)a4 externalData:(id)a5;

@end
