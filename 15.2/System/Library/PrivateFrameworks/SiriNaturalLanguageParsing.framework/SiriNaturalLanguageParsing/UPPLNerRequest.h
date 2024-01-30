@class UPPLTokenization, NSArray, UPPLEmbeddingTensor;

@interface UPPLNerRequest : NSObject

@property (readonly, nonatomic) UPPLTokenization *tokenizedUtterance;
@property (readonly, nonatomic) UPPLEmbeddingTensor *embeddings;
@property (readonly, nonatomic) NSArray *matchedSpans;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithTokenizedUtterance:(id)a0 embeddings:(id)a1 matchedSpans:(id)a2;

@end
