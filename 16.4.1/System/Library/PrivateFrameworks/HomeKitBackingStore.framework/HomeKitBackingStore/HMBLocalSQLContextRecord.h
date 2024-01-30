@class HMBModel, NSData;

@interface HMBLocalSQLContextRecord : HMFObject

@property (readonly, nonatomic) HMBModel *model;
@property (readonly, nonatomic) NSData *externalID;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithModel:(id)a0 externalID:(id)a1;

@end
