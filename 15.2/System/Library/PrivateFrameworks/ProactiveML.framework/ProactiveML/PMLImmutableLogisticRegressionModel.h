@class NSString;

@interface PMLImmutableLogisticRegressionModel : NSObject <PMLPlistAndChunksSerializableProtocol, PMLMultiLabelClassifierProtocol> {
    id _backingObject;
    const float *_weights;
    int _length;
    BOOL _intercept;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)predict:(id)a0;
- (BOOL)intercept;
- (id)toChunk;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (unsigned long long)outputDimension;
- (id)initWithWeights:(id)a0 intercept:(BOOL)a1;
- (id)initWithChunk:(id)a0 intercept:(BOOL)a1;
- (id)initWithFloatsNoCopy:(const float *)a0 count:(int)a1 intercept:(BOOL)a2;

@end
