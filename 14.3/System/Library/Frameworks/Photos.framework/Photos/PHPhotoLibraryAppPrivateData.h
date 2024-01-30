@class PLAppPrivateData, PHPhotoLibrary;

@interface PHPhotoLibraryAppPrivateData : NSObject

@property (retain) PLAppPrivateData *impl;
@property (weak) PHPhotoLibrary *photoLibrary;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (void).cxx_destruct;
- (id)initWithLibrary:(id)a0;
- (id)valueForKey:(id)a0;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (void)_handleWriteException:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)debugDescription;
- (id)valueForKeyPath:(id)a0;
- (void)invalidate;

@end
