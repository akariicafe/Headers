@class NSString, PMLDenseVector;

@interface PMLModelRegressor : NSObject <PMLPlistAndChunksSerializableProtocol> {
    PMLDenseVector *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) int count;

+ (id)modelRegressorFromFloats:(id)a0;
+ (id)modelRegressorFromFloat:(float)a0;
+ (id)regressorVectorFrom:(id)a0;

- (const float *)values;
- (id)toDictionary;
- (id)initFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)a0;
- (id)denseVector;
- (id)initModelRegressorFromFloats:(id)a0;
- (id)initWithRegressorFromFloat:(float)a0;
- (id)regressorFor:(int)a0;
- (const float *)inverseValues;

@end
