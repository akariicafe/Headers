@class NSUUID, NSData, NSString, NSArray, HMBLocalSQLQueryTable, HMBModel, HMBLocalZoneProcessModelContext, NSNumber;

@interface HMBLocalZoneProcessTuple : HMFObject

@property (readonly, nonatomic) HMBLocalZoneProcessModelContext *previousContext;
@property (readonly, nonatomic) HMBLocalZoneProcessModelContext *mergedContext;
@property (readonly, copy, nonatomic) HMBModel *updateModel;
@property (readonly, copy, nonatomic) HMBModel *outputModel;
@property (readonly, copy, nonatomic) NSNumber *outputBlockRow;
@property (readonly, nonatomic) unsigned long long recordRow;
@property (readonly, nonatomic) unsigned long long itemRow;
@property (readonly, nonatomic) NSData *externalID;
@property (readonly, nonatomic) NSUUID *modelSchema;
@property (readonly, nonatomic) NSString *modelType;
@property (readonly, nonatomic) HMBLocalSQLQueryTable *queryTable;
@property (readonly, nonatomic) NSArray *encodedQueryableColumns;

- (void).cxx_destruct;
- (id)initWithPreviousContext:(id)a0 mergedContext:(id)a1 updateModel:(id)a2 outputModel:(id)a3 outputBlockRow:(id)a4 recordRow:(unsigned long long)a5 itemRow:(unsigned long long)a6 modelSchema:(id)a7 modelType:(id)a8 externalID:(id)a9 queryTable:(id)a10;

@end
