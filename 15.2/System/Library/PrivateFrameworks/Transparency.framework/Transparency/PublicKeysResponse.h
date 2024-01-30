@class LogEntry, NSDictionary, NSMutableArray, PatInclusionProof;

@interface PublicKeysResponse : GPBMessage

@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *appLeafsArray;
@property (readonly, nonatomic) unsigned long long appLeafsArray_Count;
@property (retain, nonatomic) NSMutableArray *tltLeafsArray;
@property (readonly, nonatomic) unsigned long long tltLeafsArray_Count;
@property (retain, nonatomic) NSMutableArray *intermediatesArray;
@property (readonly, nonatomic) unsigned long long intermediatesArray_Count;
@property (retain, nonatomic) PatInclusionProof *patConfigProof;
@property (nonatomic) BOOL hasPatConfigProof;
@property (retain, nonatomic) LogEntry *tltConfigProof;
@property (nonatomic) BOOL hasTltConfigProof;
@property (retain, nonatomic) PatInclusionProof *patClosedProof;
@property (nonatomic) BOOL hasPatClosedProof;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
