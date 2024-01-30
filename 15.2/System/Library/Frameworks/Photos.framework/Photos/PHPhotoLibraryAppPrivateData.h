@class PLAppPrivateData, PHPhotoLibrary;

@interface PHPhotoLibraryAppPrivateData : NSObject

@property (retain) PLAppPrivateData *impl;
@property (weak) PHPhotoLibrary *photoLibrary;

+ (BOOL)accessInstanceVariablesDirectly;

- (id)initWithLibrary:(id)a0;
- (BOOL)setValue:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
- (BOOL)setValuesForKeysWithDictionary:(id)a0 error:(id *)a1;
- (id)valueForKey:(id)a0;
- (id)dictionaryWithValuesForKeys:(id)a0;
- (void)setValuesForKeysWithDictionary:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (BOOL)setValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (id)debugDescription;
- (id)valueForKeyPath:(id)a0;

@end
