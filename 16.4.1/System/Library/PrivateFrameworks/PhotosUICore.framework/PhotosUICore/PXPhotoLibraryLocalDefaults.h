@class PHPhotoLibraryAppPrivateData;

@interface PXPhotoLibraryLocalDefaults : PXObservable {
    PHPhotoLibraryAppPrivateData *_appPrivateData;
}

- (void)setData:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithPhotoLibrary:(id)a0;
- (id)dataForKey:(id)a0;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (id)numberForKey:(id)a0;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (void)setString:(id)a0 forKey:(id)a1;
- (BOOL)boolForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (void)_notifyObserversDidChangeValueForKey:(id)a0;
- (void)addIdentifier:(id)a0 forKey:(id)a1;
- (id)identifiersForKey:(id)a0;
- (void)removeIdentifier:(id)a0 forKey:(id)a1;
- (void)setIdentifiers:(id)a0 forKey:(id)a1;

@end
