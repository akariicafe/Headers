@class HMBModel, NSNumber, NSData;

@interface HMBLocalZoneProcessModelContext : HMFObject

@property (readonly, nonatomic) HMBModel *model;
@property (readonly, copy, nonatomic) NSNumber *outputBlockRow;
@property (readonly, nonatomic) NSData *externalData;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0 outputBlockRow:(id)a1 externalData:(id)a2;

@end
