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

- (BOOL)intercept;
- (id)predict:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)outputDimension;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)toPlistWithChunks:(id)a0;
- (id)toChunk;
- (id)initWithChunk:(id)a0 intercept:(BOOL)a1;
- (id)initWithFloatsNoCopy:(const float *)a0 count:(int)a1 intercept:(BOOL)a2;
- (id)initWithWeights:(id)a0 intercept:(BOOL)a1;

@end
