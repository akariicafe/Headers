@class NSString, NSFetchRequest, NSNumber;

@interface AMDFeatureDescriptor : NSObject

@property (retain, nonatomic) NSString *featureName;
@property (retain, nonatomic) NSFetchRequest *fetchRequest;
@property (retain, nonatomic) NSString *keyProperty;
@property (retain, nonatomic) NSString *aggregatedProperty;
@property (retain, nonatomic) NSNumber *sortOrder;
@property (retain, nonatomic) NSNumber *maxRecords;
@property (nonatomic) BOOL doOuterJoin;
@property (retain, nonatomic) NSNumber *defaultJoinValue;

+ (id)getDataType:(id)a0;

- (void).cxx_destruct;
- (id)sort:(id)a0;
- (id)getFeature:(id *)a0;
- (id)initWithDictionary:(id)a0 withUserId:(id)a1 featureName:(id)a2;
- (id)getFeatureData:(id *)a0;
- (void)outerJoin:(id)a0;
- (id)prepareResult:(id)a0;

@end
