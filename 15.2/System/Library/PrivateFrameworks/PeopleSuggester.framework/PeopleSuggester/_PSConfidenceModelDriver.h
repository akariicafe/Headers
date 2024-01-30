@class NSMutableDictionary;

@interface _PSConfidenceModelDriver : NSObject

@property (retain, nonatomic) NSMutableDictionary *confidenceModelDictionary;

+ (id)defaultArchivePath;
+ (void)deleteArchiveFile;

- (void).cxx_destruct;
- (id)init;
- (void)writeArchive:(id)a0 toFilePath:(id)a1;
- (BOOL)addEventForModel:(id)a0 forUseCaseKey:(id)a1 event:(id)a2;
- (BOOL)registerModelKey:(id)a0 forUseCaseKey:(id)a1 confidenceWindowSize:(int)a2 minimumInstanceCount:(int)a3;
- (double)getConfidenceForModel:(id)a0 forUseCaseKey:(id)a1;
- (id)getOrMakeConfidenceModelDictionary;
- (void)writeArchiveFromDict:(id)a0;
- (id)getDictionaryFromArchiveAtPath:(id)a0;

@end
