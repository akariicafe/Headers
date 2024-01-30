@class NSString, NSNumber, NSArray;
@protocol ARTechniqueForwardingStrategy, ARTechniqueDelegate;

@interface ARTechnique : NSObject <ARDotGraph, ARTechniqueProtocol, ARLoggingFullDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<ARTechniqueDelegate> delegate;
@property unsigned long long powerUsage;
@property double bonusLatency;
@property (readonly) NSNumber *traceKey;
@property (retain) NSArray *splitTechniques;
@property (retain) id<ARTechniqueForwardingStrategy> splitTechniqueFowardingStrategy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)producesResultDataForAnchorOfClass:(Class)a0;
+ (id)colorForTechnique:(id)a0;
+ (id)techniqueOfClass:(Class)a0 inArray:(id)a1;
+ (id)techniqueMatchingPredicate:(id)a0 inArray:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)processData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)prepare:(BOOL)a0;
- (id)_fullDescription;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (unsigned long long)requiredSensorDataTypes;
- (BOOL)reconfigurableFrom:(id)a0;
- (void)reconfigureFrom:(id)a0;
- (BOOL)deterministicMode;
- (long long)captureBehavior;
- (id)processResultData:(id)a0 timestamp:(double)a1 context:(id)a2;
- (id)initWithTechniques:(id)a0;
- (id)initWithParallelTechniques:(id)a0;
- (void)dotGraphWithLines:(id)a0;
- (id)techniques;
- (id)techniqueOfClass:(Class)a0;
- (id)techniqueMatchingPredicate:(id)a0;
- (id)predictedResultDataAtTimestamp:(double)a0 context:(id)a1;
- (void)replaceTechniques:(id)a0;
- (void)siblingTechniquesDidChange:(id)a0;
- (void)mergeResultData:(id)a0 intoData:(id)a1 context:(id)a2;

@end
