@class NSString, TSUTemporaryDirectory, NSMutableSet, TSUPathSet;

@interface TSPDistributableFileManager : NSObject {
    NSString *_directoryPath;
    BOOL _shouldCreate;
    TSUPathSet *_claimedPaths;
    NSMutableSet *_newIdentifiers;
    NSMutableSet *_modifiedIdentifiers;
    NSMutableSet *_deletedIdentifiers;
    TSUTemporaryDirectory *_modifiedFilesDirectory;
    BOOL _isCullingDisabled;
}

- (void)removeIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)commitWithError:(id *)a0;
- (id)_filePathForModifiedIdentifier:(id)a0;
- (BOOL)rehomeOntoPath:(id)a0;
- (id)_claimedPaths;
- (id)_filePathForIdentifier:(id)a0;
- (id)_modifiedFilesDirectoryPath;
- (void)_writeDataFromInputStream:(id)a0 length:(long long)a1 toPath:(id)a2;
- (id)addDataFromInputStream:(id)a0 length:(long long)a1 filenameHint:(id)a2;
- (id)addDataRepresentation:(id)a0 filenameHint:(id)a1;
- (void)disableFileCulling;
- (id)initWithPath:(id)a0 shouldCreate:(BOOL)a1;
- (BOOL)prepareForSaveToPath:(id)a0 error:(id *)a1;
- (id)representationForIdentifier:(id)a0;
- (void)setDataFromInputStream:(id)a0 length:(long long)a1 forIdentifier:(id)a2;
- (void)setDataRepresentation:(id)a0 forIdentifier:(id)a1;

@end
