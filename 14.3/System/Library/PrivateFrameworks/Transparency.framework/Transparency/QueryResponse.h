@class NSDictionary, InclusionProof, VRFWitness, NSMutableArray, NSData;

@interface QueryResponse : GPBMessage

@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) InclusionProof *inclusionProof;
@property (nonatomic) BOOL hasInclusionProof;
@property (retain, nonatomic) NSMutableArray *pendingSmtsArray;
@property (readonly, nonatomic) unsigned long long pendingSmtsArray_Count;
@property (retain, nonatomic) VRFWitness *uriWitness;
@property (nonatomic) BOOL hasUriWitness;
@property (copy, nonatomic) NSData *accountId;
@property (retain, nonatomic) NSMutableArray *deviceWitnessesArray;
@property (readonly, nonatomic) unsigned long long deviceWitnessesArray_Count;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
