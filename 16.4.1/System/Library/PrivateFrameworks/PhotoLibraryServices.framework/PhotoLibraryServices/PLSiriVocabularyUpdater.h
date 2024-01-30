@class PLPhotoLibrary;
@protocol PLSiriVocabularyService;

@interface PLSiriVocabularyUpdater : NSObject {
    id<PLSiriVocabularyService> _vocabularyService;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)updateAllVocabulariesInLibrary:(id)a0 withService:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_userAlbumInfoFromDictionaries:(id)a0;
- (id)_albumTitlesFromDictionaries:(id)a0;
- (id)_fetchAlbumDictionariesInContext:(id)a0;
- (id)_fetchPersonDictionariesInContext:(id)a0;
- (void)_updateAlbumsVocabularyInContext:(id)a0;
- (void)_updateContactsVocabularyInContext:(id)a0;
- (id)initWithVocabularyService:(id)a0 photoLibrary:(id)a1;
- (id)localizedTitleForAlbumDictionary:(id)a0;
- (id)personNamesFromDictionaries:(id)a0;
- (void)updateAlbumVocabularyFromAlbumDictionaries:(id)a0;
- (void)updateAllVocabularies;
- (void)updateContactVocabularyFromPersonDictionaries:(id)a0;

@end
