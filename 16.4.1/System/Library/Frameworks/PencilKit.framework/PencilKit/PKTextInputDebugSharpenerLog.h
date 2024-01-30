@class NSArray, NSDictionary;

@interface PKTextInputDebugSharpenerLog : NSObject

@property (readonly, nonatomic) NSArray *logEntries;
@property (readonly, nonatomic) NSDictionary *metadataDictionary;
@property (readonly, nonatomic) BOOL hasContent;

+ (id)_environmentMetadataDictionary;
+ (id)_recommendedFileNameForLogWithDate:(id)a0;
+ (BOOL)canLoadFromFileAtURL:(id)a0;

- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithContentLevel:(long long)a0 excludeEntyIndexes:(id)a1;
- (BOOL)_loadFromFileURL:(id)a0 error:(id *)a1;
- (id)initWithLogEntries:(id)a0;
- (id)writeLogToTemporaryDirectoryWithContentLevel:(long long)a0 excludeEntyIndexes:(id)a1 error:(id *)a2;
- (BOOL)writeToURL:(id)a0 withContentLevel:(long long)a1 excludeEntyIndexes:(id)a2 error:(id *)a3;

@end
