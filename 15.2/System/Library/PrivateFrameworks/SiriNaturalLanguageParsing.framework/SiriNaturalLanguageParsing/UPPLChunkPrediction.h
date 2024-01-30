@class NSString, NSNumber;

@interface UPPLChunkPrediction : NSObject

@property (readonly, nonatomic) NSString *coarseEntityType;
@property (readonly, nonatomic) NSString *fineGrainedEntityType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } charIndicesRange;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } tokenIndicesIndex;
@property (readonly, nonatomic) NSNumber *chunkScore;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoarseEntityType:(id)a0 fineGrainedEntityType:(id)a1 charIndicesRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 tokenIndicesIndex:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 chunkScore:(id)a4;

@end
