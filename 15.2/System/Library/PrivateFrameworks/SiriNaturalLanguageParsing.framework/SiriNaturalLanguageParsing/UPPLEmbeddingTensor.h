@class NSArray, NSString;

@interface UPPLEmbeddingTensor : NSObject

@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long numTokens;
@property (readonly, nonatomic) unsigned long long numLayers;
@property (readonly, nonatomic) unsigned long long embeddingDim;
@property (readonly, nonatomic) NSString *embedderId;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithValues:(id)a0 withNumTokens:(unsigned long long)a1 withNumLayers:(unsigned long long)a2 withEmbeddingDim:(unsigned long long)a3 withEmbedderId:(id)a4;

@end
