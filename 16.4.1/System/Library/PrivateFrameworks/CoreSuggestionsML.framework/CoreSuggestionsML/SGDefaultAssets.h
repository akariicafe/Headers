@interface SGDefaultAssets : NSObject

+ (id)responseToRobotParams;
+ (id)quickResponsesPrediction;
+ (id)_filesystemPathForFilename:(id)a0 isFault:(BOOL)a1;
+ (id)filesystemPathForFilename:(id)a0;
+ (id)checkFilesystemPathForFilename:(id)a0;
+ (id)quickResponsesPredictionVocab;
+ (id)dictionaryWithPlistAssetPath:(id)a0;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)vocabWithTrieAssetPath:(id)a0;

@end
