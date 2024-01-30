@class NSArray, NSDictionary;

@interface PKTextInputDebugSharpenerLog : NSObject

@property (readonly, nonatomic) NSArray *logEntries;
@property (readonly, nonatomic) NSDictionary *metadataDictionary;

+ (BOOL)canLoadFromFileAtURL:(id)a0;
+ (id)_environmentMetadataDictionary;
+ (id)_recommendedFileNameForLogWithDate:(id)a0;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)description;
- (id)initWithLogEntries:(id)a0;
- (id)writeLogToTemporaryDirectoryWithContentLevel:(long long)a0 error:(id *)a1;
- (BOOL)_loadFromFileURL:(id)a0 error:(id *)a1;
- (BOOL)writeToURL:(id)a0 withContentLevel:(long long)a1 error:(id *)a2;
- (id)_dictionaryRepresentationWithContentLevel:(long long)a0;

@end
