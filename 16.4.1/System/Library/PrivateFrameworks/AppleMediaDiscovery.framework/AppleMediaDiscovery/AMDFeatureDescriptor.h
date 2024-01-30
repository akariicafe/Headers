@class NSString, NSArray, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray, NSFetchRequest, NSNumber;

@interface AMDFeatureDescriptor : NSObject

@property (retain, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property (retain, nonatomic) NSString *joinTable;
@property (retain, nonatomic) NSString *joinTableDomain;
@property (retain, nonatomic) NSArray *joinRequiredColumns;
@property (nonatomic) NSString *joinType;
@property (retain, nonatomic) NSString *keyProperty;
@property (retain, nonatomic) NSString *aggregatedProperty;
@property (retain, nonatomic) NSNumber *sortOrder;
@property (retain, nonatomic) NSNumber *maxRecords;
@property (nonatomic) BOOL doOuterJoin;
@property (retain, nonatomic) NSObject *defaultJoinValue;
@property (retain, nonatomic) NSDictionary *defaultJoinValueDict;
@property (retain, nonatomic) NSMutableDictionary *propertyDict;
@property (retain, nonatomic) NSMutableArray *aggregatedPropertyList;
@property (retain, nonatomic) NSString *sortKey;
@property (retain, nonatomic) NSString *version;

+ (id)getDataType:(id)a0;

- (id)prepareDictionaryResult:(id)a0;
- (id)transformTPDataForJoin:(id)a0;
- (id)getFeatureData:(id *)a0;
- (id)prepareResult:(id)a0;
- (id)sort:(id)a0;
- (id)getFeature:(id *)a0;
- (id)initWithDictionary:(id)a0 withUserId:(id)a1 featureName:(id)a2;
- (id)performInnerJoin:(id)a0;
- (id)prepareArrayResult:(id)a0;
- (void)outerJoin:(id)a0;
- (BOOL)checkJoinParameters;
- (id)performOuterJoin:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryV2:(id)a0 withUserId:(id)a1 featureName:(id)a2 withDomain:(id)a3;

@end
