@class NSArray;

@interface CDMVocEntryMetadataExists : CDMVocEntryMetadata

@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) long long constraintType;

- (void).cxx_destruct;
- (void)parseChunks:(id)a0;

@end
