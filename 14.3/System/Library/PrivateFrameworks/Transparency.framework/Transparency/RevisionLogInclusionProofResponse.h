@class NSDictionary, NSMutableArray, LogEntry;

@interface RevisionLogInclusionProofResponse : GPBMessage

@property (readonly) NSDictionary *metadata;
@property (nonatomic) int status;
@property (retain, nonatomic) NSMutableArray *logEntryArray;
@property (readonly, nonatomic) unsigned long long logEntryArray_Count;
@property (retain, nonatomic) LogEntry *topLevelTreeEntry;
@property (nonatomic) BOOL hasTopLevelTreeEntry;

+ (id)descriptor;

- (void)setMetadata:(id)a0;
- (void)setMetadataValue:(id)a0 key:(id)a1;

@end
