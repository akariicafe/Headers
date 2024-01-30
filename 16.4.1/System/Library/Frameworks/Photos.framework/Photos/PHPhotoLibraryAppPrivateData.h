@class PLAppPrivateData, PHPhotoLibrary;

@interface PHPhotoLibraryAppPrivateData : NSObject

@property (retain) PLAppPrivateData *impl;
@property (weak) PHPhotoLibrary *photoLibrary;

+ (BOOL)accessInstanceVariablesDirectly;

- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)valueForKeyPath:(id)a0;
- (id)debugDescription;
- (id)valueForKey:(id)a0;
- (id)initWithLibrary:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (BOOL)setValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)setValuesForKeysWithDictionary:(id)a0 error:(id *)a1;

@end
