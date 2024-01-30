@class NSArray, NSDictionary, MTCallerSuppliedFields, NSMutableDictionary, MTPromise, NSMutableArray;

@interface MTMetricsData : MTObject

@property (retain, nonatomic) NSArray *registeredEventData;
@property (retain, nonatomic) NSDictionary *baseFields;
@property (retain, nonatomic) NSArray *additionalBaseData;
@property (retain, nonatomic) NSDictionary *eventSpecificFields;
@property (retain, nonatomic) NSArray *additionalEventData;
@property (retain, nonatomic) MTPromise *configBaseFields;
@property (retain, nonatomic) MTCallerSuppliedFields *callerSuppliedFields;
@property (retain, nonatomic) NSMutableArray *additionalData;
@property (retain, nonatomic) NSMutableDictionary *performanceData;
@property (retain, nonatomic) NSMutableArray *postProcessingBlocks;
@property (nonatomic, getter=isAnonymous, setter=setAnonymous:) BOOL anonymous;

- (id)toDictionary;
- (void)addFields:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)recordEvent;
- (void)addPostProcessingBlock:(id /* block */)a0;
- (id)userAndClientIDFields;
- (void)addPostProcessingBlocks:(id)a0;
- (id)getAdditionalData;
- (id)getPostProcessingBlocks;
- (id)composeFieldsMaps;
- (void)cancelUnfinishedPromisedEventData;
- (void)addFieldsWithDictionary:(id)a0;
- (void)addFieldsWithPromise:(id)a0;

@end
