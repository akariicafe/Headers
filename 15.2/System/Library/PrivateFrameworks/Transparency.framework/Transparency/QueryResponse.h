@class NSDictionary, InclusionProof, VRFWitness, NSMutableArray;

@interface QueryResponse : GPBMessage

@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) InclusionProof *inclusionProof;
@property (nonatomic) BOOL hasInclusionProof;
@property (retain, nonatomic) NSMutableArray *pendingSmtsArray;
@property (readonly, nonatomic) unsigned long long pendingSmtsArray_Count;
@property (retain, nonatomic) VRFWitness *uriWitness;
@property (nonatomic) BOOL hasUriWitness;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
