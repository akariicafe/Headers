@class PatInclusionProof, LogEntry, NSDictionary, NSData, NSMutableArray, Signature;

@interface PublicKeysResponse : GPBMessage

@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *appLeafsArray;
@property (readonly, nonatomic) unsigned long long appLeafsArray_Count;
@property (retain, nonatomic) NSMutableArray *tltLeafsArray;
@property (readonly, nonatomic) unsigned long long tltLeafsArray_Count;
@property (retain, nonatomic) NSMutableArray *intermediatesArray;
@property (readonly, nonatomic) unsigned long long intermediatesArray_Count;
@property (copy, nonatomic) NSData *vrfKey;
@property (retain, nonatomic) Signature *vrfSignature;
@property (nonatomic) BOOL hasVrfSignature;
@property (copy, nonatomic) NSData *vrfPublicKey;
@property (nonatomic) unsigned long long tltBeginningMs;
@property (retain, nonatomic) PatInclusionProof *patConfigProof;
@property (nonatomic) BOOL hasPatConfigProof;
@property (retain, nonatomic) LogEntry *tltConfigProof;
@property (nonatomic) BOOL hasTltConfigProof;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
