@class PLPhotoLibrary;
@protocol PLSiriVocabularyService;

@interface PLSiriVocabularyUpdater : NSObject {
    id<PLSiriVocabularyService> _vocabularyService;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)updateAllVocabulariesInLibrary:(id)a0 withService:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithVocabularyService:(id)a0 photoLibrary:(id)a1;
- (void)updateAllVocabularies;
- (void)_updateAlbumsVocabularyInContext:(id)a0;
- (id)_fetchAlbumDictionariesInContext:(id)a0;
- (void)updateAlbumVocabularyFromAlbumDictionaries:(id)a0;
- (id)albumTitlesFromDictionaries:(id)a0;
- (id)localizedTitleForAlbumDictionary:(id)a0;
- (void)_updateContactsVocabularyInContext:(id)a0;
- (id)_fetchPersonDictionariesInContext:(id)a0;
- (void)updateContactVocabularyFromPersonDictionaries:(id)a0;
- (id)personNamesFromDictionaries:(id)a0;

@end
