@class NSString, NSMutableDictionary;

@interface AMDOutputBuilder : NSObject

@property (retain, nonatomic) NSString *useCaseId;
@property (retain, nonatomic) NSMutableDictionary *outputDefinitions;

- (void).cxx_destruct;
- (BOOL)isValid;
- (id)getTopNContent:(unsigned long long)a0 forOutput:(id)a1 FromMLProvider:(id)a2 usingFeatureProvider:(id)a3 andModelAssets:(id)a4 withColdstartModelId:(id)a5 error:(id *)a6;
- (BOOL)filterLogicalId:(int)a0 byBitmask:(id)a1;
- (id)initWithDictionary:(id)a0 forUseCase:(id)a1;
- (id)getAllFeatureIds;
- (id)getTopNContent:(unsigned long long)a0 fromMLProvider:(id)a1 usingFeatureProvider:(id)a2 andModelAssets:(id)a3 withColdstartModelId:(id)a4 error:(id *)a5;

@end
