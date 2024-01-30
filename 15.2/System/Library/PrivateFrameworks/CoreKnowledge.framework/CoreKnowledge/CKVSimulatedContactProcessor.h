@class NSString;

@interface CKVSimulatedContactProcessor : NSObject <CKVSimulatedDatasetProcessor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vocabularyItemFromDictionary:(id)a0;
+ (id)targetOriginApp;
+ (Class)targetItemClass;
+ (id)targetDirectoryURL;
+ (id)dictionaryFromVocabularyItem:(id)a0;


@end
